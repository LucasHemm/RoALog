#include <Arduino.h>
#include "SimpleLED.h"
#include "SimpleTraficLight.h"

int r1Pin = D0;
int y1Pin = D1;
int g1Pin = D2;

int r2Pin = D5;
int y2Pin = D6;
int g2Pin = D7;

SimpleTraficLight traficLight(r1Pin, y1Pin, g1Pin, r2Pin, y2Pin, g2Pin, (long[]){1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000});

void setup()
{
  // put your setup code here, to run once:
  long start = millis();
  traficLight.setup(start);
}

void loop()
{

  long now = millis();
  traficLight.update(now);
}
