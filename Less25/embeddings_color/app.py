import pandas as pd
import numpy as np
import streamlit as st
import plotly.express as px
from functools import lru_cache

st.set_page_config(
                    page_title="Embeddings",
                    #layout="wide",
                    )

# Constants
SIZES = [1, 20, 30]
DEFAULT_THRESHOLD = 80
CACHE_SIZE = 32
DEFAULT_COLOR = 'rgb(200,200,200)'  # Added fallback color

@st.cache_data
def load_data():
    """Load and preprocess data once, cached by Streamlit."""
    df = pd.read_csv('data/colors.csv', names=['simple_name', 'name', 'hex', 'r', 'g', 'b'])
    df['rgb'] = 'rgb(' + df['r'].astype(str) + ',' + df['g'].astype(str) + ',' + df['b'].astype(str) + ')'
    df['category'] = df['simple_name'].str.split('_').str[-1]
    df['size'] = SIZES[0]
    return df

@st.cache_data
def get_top_colors(df):
    """Get most common color categories, cached by Streamlit."""
    return [c for c in df['category'].value_counts()[:15].index.tolist() 
            if c in df.simple_name.values]

@lru_cache(maxsize=CACHE_SIZE)
def calculate_distances(vector_tuple):
    """Calculate distances between colors, cached for repeated queries."""
    vector = np.array(vector_tuple)
    coords = df[['r', 'g', 'b']].values
    return np.linalg.norm(coords - vector, axis=1)

def build_chart(df_plot):
    """Create 3D scatter plot with optimized layout."""
    if len(df_plot) == 0:
        # Return empty plot with same structure
        df_plot = pd.DataFrame({
            'r': [0], 'g': [0], 'b': [0], 
            'simple_name': ['No matches'], 
            'name': ['No matches'],
            'rgb': [DEFAULT_COLOR],
            'size': [1]
        })
    
    fig = px.scatter_3d(
        df_plot,
        x='r', y='g', z='b',
        template='plotly_white',
        color='simple_name',
        color_discrete_sequence=df_plot['rgb'].tolist(),
        size='size',
        hover_data=['name']
    )
    
    fig.update_layout(
        showlegend=False,
        margin=dict(l=5, r=5, t=20, b=5),
        scene=dict(
            xaxis_title="Red",
            yaxis_title="Green",
            zaxis_title="Blue",
            xaxis=dict(range=[0, 255]),
            yaxis=dict(range=[0, 255]),
            zaxis=dict(range=[0, 255])
        )
    )
    return fig

def render_intro():
    """Render the introduction section."""
    st.title('Colorful vectors')
    st.markdown("""
    You might have heard that objects like words or images can be represented by "vectors". 
    What does that mean, exactly? It seems like a tricky concept, but it doesn't have to be.
     
    Let's start here, where colors are represented in 3-D space 🌈.
    Each axis represents how much of primary colors `(red, green, and blue)`
    each color comprises.
     
    For example, `Magenta` is represented by `(255, 0, 255)`,
    and `(80, 200, 120)` represents `Emerald`.
    That's all a *vector* is in this context - a sequence of numbers.

    Take a look at the resulting 3-D image below; it's kind of mesmerising!
    (You can spin the image around, as well as zoom in/out.)
    """)

def render_why_matters():
    """Render the 'Why this matters' section."""
    st.markdown("""
    ### Why does this matter?
    
    You see here that similar colors are placed close to each other in space.
     
    It seems obvious, but **this** is the crux of why a *vector representation* is so powerful. 
    These objects being located *in space* based on their key property (`color`) 
    enables an easy, objective assessment of similarity.
    
    Let's take this further:   
    """)

def render_vector_search_intro():
    """Render the vector search introduction."""
    st.header('Searching in vector space')
    st.markdown("""
    Imagine that you need to identify colors similar to a given color. 
    You could do it by name, for instance looking for colors containing matching words.
    
    But remember that in the 3-D chart above, similar colors are physically close to each other. 
    So all you actually need to do is to calculate distances, and collect points based on a threshold!
    
    That's probably still a bit abstract - so pick a 'base' color, and we'll go from there. 
    In fact - try a few different colors while you're at it!
    """)

def render_conclusions():
    """Render the conclusions section."""
    st.markdown("---")
    st.header("So what?")
    st.markdown("""
    What did you notice? 
    
    The thing that stood out to me is how *robust* and *consistent*
    the vector search results are. 
    
    It manages to find a bunch of related colors
    regardless of what it's called. It doesn't matter that the color
    'scarlet' does not contain the word 'red';
    it goes ahead and finds all the neighboring colors based on a consistent criterion. 
    """)
    
    st.markdown("""
    ---
    ### Generally speaking...
    
    Obviously, this is a pretty simple, self-contained example. 
    Colors are particularly suited for representing using just a few
    numbers, like our primary colors. One number represents how much
    `red` each color contains, another for `green`, and the last for `blue`.
    
    But that core concept of representing similarity along different
    properties using numbers is exactly what happens in other domains.
    
    The only differences are in *how many* numbers are used, and what
    they represent. For example, words or documents might be represented by 
    hundreds (e.g. 300 or 768) of AI-derived numbers.
    """)

def render_search_section(df, query, match, thresh_sel):
    """Render the search comparison section."""
    col1, col2 = st.columns(2)
    
    with col1:
        st.markdown(f"These colors contain the text: `{match.simple_name}`:")
        text_matches = df[df.simple_name.str.contains(query, case=False)].copy()
        if len(text_matches) > 0:
            text_matches['size'] = SIZES[1]
            text_matches.loc[text_matches.simple_name == query, 'size'] = SIZES[2]
        
        fig1 = build_chart(text_matches)
        st.plotly_chart(fig1, use_container_width=True)
        st.markdown(f"Found {len(text_matches)} colors containing the string `{query}`.")
        with st.expander("Click to see the whole list"):
            st.markdown("- " + "\n- ".join(text_matches['name'].tolist()))

    with col2:
        st.markdown(f"These colors are close to the vector `({match.r}, {match.g}, {match.b})`:")
        distances = calculate_distances(tuple(match[['r', 'g', 'b']].values))
        vector_matches = df[distances < thresh_sel].copy()
        if len(vector_matches) > 0:
            vector_matches['size'] = SIZES[1]
            vector_matches.loc[vector_matches.simple_name == query, 'size'] = SIZES[2]
        
        fig2 = build_chart(vector_matches)
        st.plotly_chart(fig2, use_container_width=True)
        st.markdown(f"Found {len(vector_matches)} colors similar to `{query}` based on its `(R, G, B)` values.")
        with st.expander("Click to see the whole list"):
            st.markdown("- " + "\n- ".join(vector_matches['name'].tolist()))

    return text_matches, vector_matches

def main():
    """Main application function."""
    # Load data
    global df  # Needed for calculate_distances function
    df = load_data()
    
    # Render introduction
    render_intro()
    
    # Main visualization
    with st.container():
        fig = build_chart(df)
        st.plotly_chart(fig, use_container_width=True)
    
    # Why this matters section
    render_why_matters()
    
    # Vector search introduction
    render_vector_search_intro()
    
    # Get top colors once
    top_colors = get_top_colors(df)
    
    # Color selection
    query = st.selectbox('Pick a "base" color:', top_colors, index=5)
    match = df[df.simple_name == query].iloc[0]
    
    st.markdown(f"""
    The color `{match.simple_name}` is also represented 
    in our 3-D space by `({match.r}, {match.g}, {match.b})`. 
    Let's see what we can find using either of these properties.
    (Oh, you can adjust the similarity threshold below as well.)
    """)
    
    # Threshold selection
    with st.expander(f"Similarity search options"):
        st.markdown(f"""
        Do you want to find lots of similar colors, or 
        just a select few *very* similar colors to `{match.simple_name}`.
        """)
        thresh_sel = st.slider('Select a similarity threshold',
                             min_value=20, max_value=100,
                             value=DEFAULT_THRESHOLD, step=1)
    st.markdown("---")
    
    # Search comparison
    text_matches, vector_matches = render_search_section(df, query, match, thresh_sel)
    
    # Render conclusions
    render_conclusions()

if __name__ == '__main__':
    main()