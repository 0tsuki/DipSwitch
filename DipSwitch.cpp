#include "Arduino.h"
#include "DipSwitch.h"

DipSwitch::DipSwitch(int* pins)
{
    for (int i = 0; i < sizeof(pins); i++)
    {
        pinMode(pins[i], INPUT);
        digitalWrite(pins[i], HIGH);
    }
    _pins = pins;
}

int DipSwitch::read()
{
    int value = 0;
    for(int i = 0; i < sizeof(_pins); i++){
        value += digitalRead(_pins[i]) << i;
    }
    return value;
}
