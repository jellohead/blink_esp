#include <Arduino.h>
#define BLUELED 0

void setup()
{
    pinMode(BLUELED, OUTPUT);
}

void loop()
{
    digitalWrite(BLUELED, LOW);
    delay(1000);
    digitalWrite(BLUELED, HIGH);
    delay(2000);
}