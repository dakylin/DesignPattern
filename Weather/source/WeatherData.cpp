#include "../include/Subject.h"

WeatherData::WeatherData()
{
    observers = new ObserverList;
    temperature = 0.0;
    humidity = 0.0;
    pressure = 0.0;
}

void WeatherData::RegisterObServer(Observer &o)
{
    observers->push_back(o);
}

void WeatherData::RemoveObServer(Observer &o)
{
    ObserverList::iterator it = find();
    if (it != observers->end())
    {
        observers->erase(it);
    }
}

void WeatherData::NotifyObServer()
{
    for (ObserverList::iterator it = observers->begin(); it != observers->end(); ++it)
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

