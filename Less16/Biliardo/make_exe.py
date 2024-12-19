import os
import shutil
import sys
from pathlib import Path
import PyInstaller.__main__

def create_directory_structure():
    """Create the necessary directory structure if it doesn't exist."""
    base_dir = os.getcwd()
    assets_dir = os.path.join(base_dir, 'assets', 'images')
    os.makedirs(assets_dir, exist_ok=True)
    return assets_dir

def check_and_copy_assets(assets_dir):
    """Check for required image files and print detailed status."""
    required_files = ['cue.png', 'table.png'] + [f'ball_{i}.png' for i in range(1, 17)]
    
    print("\nVerifica dei file richiesti:")
    print("-" * 50)
    
    missing_files = []
    for file in required_files:
        file_path = os.path.join(assets_dir, file)
        if os.path.exists(file_path):
            print(f"✓ Trovato: {file}")
        else:
            print(f"✗ Mancante: {file}")
            missing_files.append(file)
    
    if missing_files:
        print("\nERRORE: File mancanti!")
        print("Assicurati che i seguenti file siano presenti in assets/images/:")
        for file in missing_files:
            print(f"- {file}")
        return False
    return True

def clean_build_directories():
    """Clean up previous build artifacts."""
    dirs_to_clean = ['build', 'dist']
    for dir_name in dirs_to_clean:
        if os.path.exists(dir_name):
            print(f"Pulizia directory {dir_name}...")
            shutil.rmtree(dir_name)

def build_executable():
    """Build the executable using PyInstaller."""
    print("\nAvvio della build...")
    
    # Costruisci il percorso corretto per i dati
    datas_string = ""
    assets_path = os.path.join(os.getcwd(), 'assets')
    for root, dirs, files in os.walk(assets_path):
        for file in files:
            full_path = os.path.join(root, file)
            relative_path = os.path.relpath(os.path.dirname(full_path), os.getcwd())
            datas_string += f"    (r'{full_path}', r'{relative_path}'),\n"
    
    spec_content = f'''
# -*- mode: python ; coding: utf-8 -*-

a = Analysis(
    ['pool_game.py'],
    pathex=[],
    binaries=[],
    datas=[
{datas_string}
    ],
    hiddenimports=['pygame', 'pymunk', 'pymunk.pygame_util', 'asyncio'],
    hookspath=[],
    hooksconfig={{}},
    runtime_hooks=[],
    excludes=[],
    noarchive=False,
)

pyz = PYZ(a.pure)

exe = EXE(
    pyz,
    a.scripts,
    a.binaries,
    a.datas,
    name='PoolGame',
    debug=False,
    strip=False,
    upx=True,
    runtime_tmpdir=None,
    console=False,
    disable_windowed_traceback=False,
    argv_emulation=False,
    target_arch=None,
    codesign_identity=None,
    entitlements_file=None,
)
'''
    
    with open('pool_game.spec', 'w') as f:
        f.write(spec_content)
    
    try:
        PyInstaller.__main__.run([
            'pool_game.spec',
            '--clean'
        ])
        return True
    except Exception as e:
        print(f"\nErrore durante la build: {str(e)}")
        return False

def main():
    print("=== Inizializzazione Build Process ===")
    
    if not os.path.exists('pool_game.py'):
        print("ERRORE: pool_game.py non trovato nella directory corrente!")
        sys.exit(1)
    
    assets_dir = create_directory_structure()
    print(f"\nDirectory di lavoro: {os.getcwd()}")
    print(f"Directory assets: {assets_dir}")
    
    if not check_and_copy_assets(assets_dir):
        sys.exit(1)
    
    clean_build_directories()
    
    if build_executable():
        print("\n✓ Build completata con successo!")
        print("L'eseguibile si trova nella cartella 'dist'")
    else:
        print("\n✗ Build fallita!")
        sys.exit(1)

if __name__ == "__main__":
    main()