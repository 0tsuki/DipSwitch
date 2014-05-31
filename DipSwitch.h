#ifndef DipSwitch_h
#define DipSwitch_h

#include "Arduino.h"

class DipSwitch
{
    public:
        DipSwitch(int number_of_pins, int* pins);
        int read();
    private:
        int _number_of_pins;
        int* _pins;
};

#endif
