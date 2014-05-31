#include "Arduino.h"
#include "DipSwitch.h"

DipSwitch::DipSwitch(int number_of_pins, int* pins)
{
    _number_of_pins = number_of_pins;
    _pins = pins;
    for (int i = 0; i < _number_of_pins; i++)
    {
        pinMode(_pins[i], INPUT_PULLUP);
    }
}

int DipSwitch::read()
{
    int value = 0;
    for(int i = 0; i < _number_of_pins; i++){
        value += digitalRead(_pins[i]) << i;
    }
    return value;
}
