#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_

#include "Subject.h"
#include <list>

typedef std::list<Observer> ObserverList;

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
    ObserverList *observers;
    float m_temperature;
    float m_humidity;
    float m_pressure;
};

#endif
