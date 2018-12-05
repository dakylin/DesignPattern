#include "../include/Subject.h"

WeatherData::WeatherData()
{
    observers.clear();
    temperature = 0.0;
    humidity = 0.0;
    pressure = 0.0;
}

void WeatherData::RegisterObServer(Observer &o)
{
    observers.insert(o);
}

void WeatherData::RemoveObServer(Observer &o)
{
    ObserverSet::iterator it = find(o);
    if (it != observers->end())
    {
        observers->erase(it);
    }
}

void WeatherData::NotifyObServer()
{
    for (ObserverSet::iterator it = observers->begin(); it != observers->end(); ++it)
    {
        it->update(m_temperature, m_humidity, m_pressure);
    }
}

void WeatherData::MeasurementChanged()
{
    NotifyObServer();
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure)
{
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    MeasurementChanged();
}

