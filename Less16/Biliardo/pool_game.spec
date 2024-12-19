
# -*- mode: python ; coding: utf-8 -*-

a = Analysis(
    ['pool_game.py'],
    pathex=[],
    binaries=[],
    datas=[
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_1.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_10.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_11.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_12.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_13.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_14.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_15.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_16.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_2.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_3.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_4.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_5.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_6.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_7.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_8.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\ball_9.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\cue.png', r'assets\images'),
    (r'C:\Users\danie\Il mio Drive\Lesson\PROGETTI_INTERESTING\PyMunk_simulatore\Biliardo\assets\images\table.png', r'assets\images'),

    ],
    hiddenimports=['pygame', 'pymunk', 'pymunk.pygame_util', 'asyncio'],
    hookspath=[],
    hooksconfig={},
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
