import streamlit as st
import requests
import pandas as pd
import plotly.express as px
import plotly.subplots as sp
import plotly.graph_objects as go

def create_feature_plots(df):
    """Create multiple subplots for different feature ranges"""
    feature_groups = {
                    'Dati Personali': ['Età', 'Anni di Impiego'],
                    'Dati Finanziari': ['Reddito Annuale', 'Importo Richiesto'],
                    'Punteggio': ['Credit Score']
                    }
    
    fig = sp.make_subplots(
                            rows=len(feature_groups),
                            cols=1,
                            subplot_titles=list(feature_groups.keys()),
                            vertical_spacing=0.1
                            )
    
    colors = px.colors.qualitative.Set3

    row = 1
    for group_name, features in feature_groups.items():
        group_df = df[df['Feature'].isin(features)]
        
        for idx, (feature, value) in enumerate(zip(group_df['Feature'], group_df['Valore'])):
            fig.add_trace(
                go.Bar(
                    name=feature,
                    x=[feature],
                    y=[value],
                    text=[f"{value:,.0f}"],
                    textposition='auto',
                    marker_color=colors[row-1],
                    showlegend=False
                ),
                row=row,
                col=1
            )
        row += 1
    
    fig.update_layout(
                    height=600,
                    title_text="Parametri del Prestito",
                    title_x=0.5,
                    template="plotly_dark",
                    bargap=0.2,
                    )
    
    fig.update_yaxes(title_text="Anni", row=1, col=1)
    fig.update_yaxes(title_text="Euro", row=2, col=1)
    fig.update_yaxes(title_text="Punteggio", row=3, col=1)
    
    return fig

def predict_modelbit(url, input_list) -> str:
    """Function of inference"""
    headers = {'Content-Type': 'application/json'}
    data = {"data": input_list}
    try:
        response = requests.post(url, headers=headers, json=data)
        response.raise_for_status()
        return response.json()['data'][0]
    except requests.exceptions.RequestException as e:
        st.error(f"Errore nella richiesta HTTP: {str(e)}")
        return None

def display_prediction_result(result, df):
    """Display the prediction result and data used"""
    st.markdown("### Predizione di Default:")
    if result.lower() == 'yes':
        st.error("⚠️ RISCHIO DI DEFAULT ELEVATO")
    else:
        st.success("✅ RISCHIO DI DEFAULT BASSO")
    
    st.markdown("### Dati inseriti:")
    styled_df = df.style.format({
        'Valore': lambda x: f'{x:,.0f}' if isinstance(x, (int, float)) else x
    })
    st.dataframe(styled_df)

def main():
    st.set_page_config(page_title="Loan Default Prediction", layout="wide")
    st.title("🏦 Predizione Rischio Default Prestiti")
    st.markdown("Analisi del rischio di default basata su dati personali e finanziari del richiedente.")
    st.markdown("---")
    with st.sidebar:
        st.header("📊 Dati Richiedente")
        
        # URL del modello (fisso)
        model_url = "https://frenzfrenz.app.modelbit.com/v1/test666/latest"
        
        # Input con valori predefiniti dell'esempio
        age = st.number_input("Età", 
                            value=32,
                            min_value=18,
                            max_value=100,
                            help="Età del richiedente")
        
        annual_income = st.number_input("Reddito Annuale (€)", 
                                      value=82123,
                                      min_value=0,
                                      help="Reddito annuale lordo")
        
        credit_score = st.number_input("Credit Score",
                                     value=689,
                                     min_value=300,
                                     max_value=850,
                                     help="Punteggio di credito (300-850)")
        
        employment_years = st.number_input("Anni di Impiego",
                                         value=1,
                                         min_value=0,
                                         help="Anni di esperienza lavorativa")
        
        loan_amount = st.number_input("Importo Richiesto (€)",
                                    value=10789,
                                    min_value=0,
                                    help="Importo del prestito richiesto")
        
        inputs = [age, annual_income, credit_score, employment_years, loan_amount]
        
        predict_button = st.button("🔍 Analizza Rischio", use_container_width=True)

    # Layout principale
    col1, col2 = st.columns([2, 1])
    df = pd.DataFrame({
                    'Feature': ['Età', 'Reddito Annuale', 'Credit Score', 'Anni di Impiego', 'Importo Richiesto'],
                    'Valore': inputs
                    })
    
    with col1:
        st.header("📈 Riepilogo Dati")
        fig = create_feature_plots(df)
        st.plotly_chart(fig, use_container_width=True)

    with col2:
        st.header("🎲 Risultato Analisi")
        if predict_button:
            with st.spinner('Analisi del rischio in corso...'):
                result = predict_modelbit(model_url, inputs)
                if result:
                    display_prediction_result(result, df)

if __name__ == "__main__":
    main()