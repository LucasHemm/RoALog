#include "MyLightSensor.h"
#include "Arduino.h"

MyLightSensor::MyLightSensor(int s0, int s1, int s2, int s3, int out) : _s0(s0), _s1(s1), _s2(s2), _s3(s3), _out(out){};

int data = 0;
int color = 0;

void MyLightSensor::setup(long startTime)
{
    pinMode(_s0, OUTPUT);
    pinMode(_s1, OUTPUT);
    pinMode(_s2, OUTPUT);
    pinMode(_s3, OUTPUT);
    pinMode(_out, INPUT);

    Serial.begin(9600);

    digitalWrite(_s0, HIGH); // Putting S0/S1 on HIGH/HIGH levels means the output frequency scalling is at 100% (recommended)
    digitalWrite(_s1, HIGH);
};

void MyLightSensor::update(long now)
{

    if (now < _nextChangeTime)
        return;

    digitalWrite(_s2, LOW); // S2/S3 levels define which set of photodiodes we are using LOW/LOW is for RED LOW/HIGH is for Blue and HIGH/HIGH is for green
    digitalWrite(_s3, LOW);
    Serial.print("Red value= ");
    data = pulseIn(_out, LOW); // here we wait until "out" go LOW, we start measuring the duration      and stops when "out" is HIGH again
    color = map(data, 60, 15, 0, 255);
    if (color > 255)
    {
        color = 255;
    }
    else if (color < 0)
    {
        color = 0;
    }
    Serial.print(color);
    Serial.print("\t");

    digitalWrite(_s2, LOW);
    digitalWrite(_s3, HIGH);
    Serial.print("Blue value= ");
    data = pulseIn(_out, LOW); // here we wait until "out" go LOW, we start measuring the duration and stops when "out" is HIGH again
    color = map(data, 80, 11, 0, 255);
    if (color > 255)
    {
        color = 255;
    }
    else if (color < 0)
    {
        color = 0;
    }

    Serial.print(color);
    Serial.print("\t");

    digitalWrite(_s2, HIGH);
    digitalWrite(_s3, HIGH);
    Serial.print("Green value= ");
    data = pulseIn(_out, LOW); // here we wait until "out" go LOW, we start measuring the duration and stops when "out" is HIGH again
    color = map(data, 80, 20, 0, 255);
    if (color > 255)
    {
        color = 255;
    }
    else if (color < 0)
    {
        color = 0;
    }
    Serial.print(color);
    Serial.print("\t");

    Serial.println();

    _nextChangeTime += _colorTimer;
}