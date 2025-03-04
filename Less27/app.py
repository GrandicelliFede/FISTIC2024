# pip install wordllama gradio

import gradio as gr
from wordllama import WordLlama

# Load the default WordLlama model
wl = WordLlama.load()

def calculate_similarity(sentence1, sentence2):
    similarity_score = wl.similarity(sentence1, sentence2)
    return similarity_score

def rank_documents(query, candidates):
    ranked_docs = wl.rank(query, candidates)
    return ranked_docs

def deduplicate_candidates(candidates, threshold):
    deduplicated = wl.deduplicate(candidates, threshold)
    return deduplicated

def filter_candidates(query, candidates, threshold):
    filtered = wl.filter(query, candidates, threshold)
    return filtered

def topk_candidates(query, candidates, k):
    topk = wl.topk(query, candidates, k)
    return topk

def create_gradio_interface():
    with gr.Blocks(theme=gr.themes.Soft()) as demo:

        gr.Markdown("# WordLlama")
        gr.Markdown("## NLP Toolkit")
        
        with gr.Tab("Similarity"):
            with gr.Row():
                sentence1 = gr.Textbox(label="Sentence 1", placeholder="Enter the first sentence here...")
                sentence2 = gr.Textbox(label="Sentence 2", placeholder="Enter the second sentence here...")
            similarity_output = gr.Number(label="Similarity Score")
            submit_similarity_btn = gr.Button("Calculate Similarity")
            submit_similarity_btn.click(
                fn=calculate_similarity,
                inputs=[sentence1, sentence2],
                outputs=[similarity_output]
            )
            examples_similarity = gr.Examples(
                examples=[
                    ["I love programming.", "I enjoy coding."],
                    ["The weather is sunny.", "It's a bright day."],
                    ["I need coffee.", "I'm looking for a coffee shop."]
                ],
                inputs=[sentence1, sentence2],
            )

        with gr.Tab("Rank Documents"):
            query = gr.Textbox(label="Query", placeholder="Enter the query here...")
            candidates = gr.Textbox(label="Candidates (comma separated)", placeholder="Enter candidate sentences here...")
            ranked_docs_output = gr.Dataframe(headers=["Document", "Score"])
            submit_rank_btn = gr.Button("Rank Documents")
            submit_rank_btn.click(
                fn=lambda q, c: rank_documents(q, c.split(',')),
                inputs=[query, candidates],
                outputs=[ranked_docs_output]
            )
            examples_rank = gr.Examples(
                examples=[
                    ["I went to the car", "I went to the park, I went to the shop, I went to the truck, I went to the vehicle"],
                    ["Looking for a restaurant", "I need food, I'm hungry, I want to eat, Let's find a place to eat"],
                    ["Best programming languages", "Python, JavaScript, Java, C++"]
                ],
                inputs=[query, candidates],
            )

        with gr.Tab("Deduplicate Candidates"):
            candidates_dedup = gr.Textbox(label="Candidates (comma separated)", placeholder="Enter candidate sentences here...")
            threshold_dedup = gr.Slider(label="Threshold", minimum=0.0, maximum=1.0, step=0.01, value=0.8)
            deduplicated_output = gr.Textbox(label="Deduplicated Candidates")
            submit_dedup_btn = gr.Button("Deduplicate")
            submit_dedup_btn.click(
                fn=lambda c, t: deduplicate_candidates(c.split(','), t),
                inputs=[candidates_dedup, threshold_dedup],
                outputs=[deduplicated_output]
            )
            examples_dedup = gr.Examples(
                examples=[
                    ["apple, apple, orange, banana", 0.8],
                    ["cat, dog, cat, bird, dog", 0.9],
                    ["text, text, more text, text", 0.7]
                ],
                inputs=[candidates_dedup, threshold_dedup],
            )

        with gr.Tab("Filter Candidates"):
            filter_query = gr.Textbox(label="Query", placeholder="Enter the query here...")
            candidates_filter = gr.Textbox(label="Candidates (comma separated)", placeholder="Enter candidate sentences here...")
            threshold_filter = gr.Slider(label="Threshold", minimum=0.0, maximum=1.0, step=0.01, value=0.3)
            filtered_output = gr.Textbox(label="Filtered Candidates")
            submit_filter_btn = gr.Button("Filter Candidates")
            submit_filter_btn.click(
                fn=lambda q, c, t: filter_candidates(q, c.split(','), t),
                inputs=[filter_query, candidates_filter, threshold_filter],
                outputs=[filtered_output]
            )
            examples_filter = gr.Examples(
                examples=[
                    ["I went to the car", "I went to the park, I went to the shop, I went to the truck", 0.3],
                    ["Looking for a restaurant", "I want to eat, I'm hungry, Let's find a place to eat", 0.4],
                    ["Best programming languages", "Python, JavaScript, Java, C++", 0.5]
                ],
                inputs=[filter_query, candidates_filter, threshold_filter],
            )

        with gr.Tab("Top-k Candidates"):
            topk_query = gr.Textbox(label="Query", placeholder="Enter the query here...")
            candidates_topk = gr.Textbox(label="Candidates (comma separated)", placeholder="Enter candidate sentences here...")
            k = gr.Slider(label="Top-k", minimum=1, maximum=10, step=1, value=3)
            topk_output = gr.Textbox(label="Top-k Candidates")
            submit_topk_btn = gr.Button("Get Top-k Candidates")
            submit_topk_btn.click(
                fn=lambda q, c, k: topk_candidates(q, c.split(','), k),
                inputs=[topk_query, candidates_topk, k],
                outputs=[topk_output]
            )
            examples_topk = gr.Examples(
                examples=[
                    ["I went to the car", "I went to the park, I went to the shop, I went to the truck, I went to the vehicle", 3],
                    ["Looking for a restaurant", "I want to eat, I'm hungry, Let's find a place to eat", 2],
                    ["Best programming languages", "Python, JavaScript, Java, C++", 4]
                ],
                inputs=[topk_query, candidates_topk, k],
            )

        gr.Markdown("""
        # WordLlama Gradio Demo
        
        **WordLlama** is a fast, lightweight NLP toolkit that handles tasks like fuzzy deduplication, similarity, and ranking with minimal inference-time dependencies and is optimized for CPU hardware.

        For more details, visit the [WordLlama GitHub repository](https://github.com/dleemiller/WordLlama).

        ## Examples

        **Calculate Similarity**

        ```python
        from wordllama import WordLlama

        # Load the default WordLlama model
        wl = WordLlama.load()

        # Calculate similarity between two sentences
        similarity_score = wl.similarity("i went to the car", "i went to the pawn shop")
        print(similarity_score)  # Output: 0.06641249096796882
        ```

        **Rank Documents**

        ```python
        query = "i went to the car"
        candidates = ["i went to the park", "i went to the shop", "i went to the truck", "i went to the vehicle"]
        ranked_docs = wl.rank(query, candidates)
        print(ranked_docs)
        # Output:
        # [
        #   ('i went to the vehicle', 0.7441646856486314),
        #   ('i went to the truck', 0.2832691551894259),
        #   ('i went to the shop', 0.19732814982305436),
        #   ('i went to the park', 0.15101404519322253)
        # ]
        ```

        **Additional Inference Methods**

        ```python
        # Fuzzy Deduplication
        wl.deduplicate(candidates, threshold=0.8)

        # Clustering with K-means
        wl.cluster(docs, k=5, max_iterations=100, tolerance=1e-4)

        # Filtering Candidates
        wl.filter(query, candidates, threshold=0.3)

        # Top-k Candidates
        wl.topk(query, candidates, k=3)
        ```
        """)

    return demo

# Create and launch the Gradio interface
demo = create_gradio_interface()
demo.launch()