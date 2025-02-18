import streamlit as st
import requests
from datetime import datetime
from meteostat import Point, Daily
from prophet import Prophet
from prophet.plot import plot_plotly
from geopy.geocoders import Nominatim
import pandas as pd

# Funzione per fare la richiesta all'API di Meteostat
def get_weather_data(nome):
    geolocator = Nominatim(user_agent="app")
    location = geolocator.geocode(nome)
    start = datetime(2019, 1, 1)
    end = datetime(2025, 1, 21)
    cities = {nome:[location.latitude, location.longitude]}
    city = Point(list(cities.values())[0][0],list(cities.values())[0][1], 20)
    data = Daily(city, start, end)
    data = data.fetch()
    data['city'] = list(cities.keys())[0]
    st.write(data.head())

    data_2=data.reset_index().copy()
    data_2=data_2[['time','tavg']]
    data_2.columns=['ds','y']
    data_2['ds'] = pd.to_datetime(data_2['ds'])

    m = Prophet()
    model = m.fit(data_2)
    mouth=st.number_input('insert forecasting mouth', value=24)
    future = model.make_future_dataframe(periods=mouth,freq='MS')
    forecast = model.predict(future)    

    df_merge = pd.merge(data_2, forecast[['ds','yhat_lower','yhat_upper','yhat']],on='ds')
    df_merge = df_merge[['ds','yhat_lower','yhat_upper','yhat','y']]


    fig = plot_plotly(model, forecast)
    fig.update_layout( 
                  yaxis_title="Date",
                  xaxis_title="Degree",
                  title="Degree on the time",
                  )
    st.plotly_chart(fig)

# Interfaccia utente Streamlit
st.title("Dati Meteo")

# Bottone per fare la richiesta
nome = st.text_input("Inserisci il nome della città:", value="Bologna")
if st.button("Ottieni Dati Meteo"):
    data = get_weather_data(nome)
    if data:
        st.write(data)  # Mostra i dati ricevuti dall'API