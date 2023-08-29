#ifndef MYLIGHTSENSOR_H
#define MYLIGHTSENSOR_H

class MyLightSensor
{
public:
    MyLightSensor(int s0, int s1, int s2, int s3, int out);
    void setup(long startTime);
    void update(long now);

private:
    const static long _colorTimer = 500;
    int _s0;
    int _s1;
    int _s2;
    int _s3;
    int _out;
    long _nextChangeTime;
};

#endif // MYLIGHTSENSOR_H