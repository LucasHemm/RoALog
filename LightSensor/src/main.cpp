#include "Arduino.h"
#include "MyLightSensor.h"

#define s0 D0
#define s1 D1
#define s2 D2
#define s3 D3
#define out D5


MyLightSensor sensor(s0, s1, s2, s3, out);

void setup()
{
  sensor.setup(millis());
}

void loop() 
{
  sensor.update(millis());
}
