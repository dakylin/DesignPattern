#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_

#include "Subject.h"
#include <set>

typedef std::set<Observer> ObserverSet;

class WeatherData : public Subject
{
public:
    WeatherData();
    virtual ~WeatherData();
    virtual void RegisterObServer(Observer &o);
    virtual void RemoveObServer(Observer &o);
    virtual void NotifyObServer();
    void MeasurementChanged();
    void SetMeasurements(float temperature, float humidity, float pressure);
private:
    ObserverSet observers;
    float m_temperature;
    float m_humidity;
    float m_pressure;
};

#endif
