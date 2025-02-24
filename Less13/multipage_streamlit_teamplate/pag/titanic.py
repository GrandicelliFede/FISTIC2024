import streamlit as st
import pandas as pd
import joblib

def main():

    st.title("Titanic")

    MODEL_PATH = '../models/titanic_pipe.pkl'
    try:
        model = st.session_state['models']['titanic']
    except:
        model = joblib.load(MODEL_PATH)

    Age= 34
    Embarked = 'Q'
    Fare = 40
    Parch = 0
    Pclass = 3
    Sex = 'female'
    SibSp = 0

    data = {
            "Pclass": [Pclass],
            "Sex": [Sex],
            "Age": [Age],
            "SibSp": [SibSp],
            "Parch": [Parch],
            "Fare": [Fare],
            "Embarked": [Embarked]
            }
    
    df_input = pd.DataFrame(data)
    st.dataframe(df_input)

    classes = {0:'died',
               1:'survived',
              }

    res = model.predict(df_input).astype(int)[0]
    print(res)

    y_pred = classes[res]
    if st.button('Prediction'):
        st.success(f"final result {y_pred}")
    

if __name__ == "__main__":
    main()

