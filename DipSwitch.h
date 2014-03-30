#ifndef DipSwitch_h
#define DipSwitch_h

#include "Arduino.h"

class DipSwitch
{
    public:
        DipSwitch(int* pins);
        int read();
    private:
        int* _pins;
};

#endif
