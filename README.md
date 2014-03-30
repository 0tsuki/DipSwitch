# DipSwitch

This is a Arduino library for handling DIP Switch

## Examples

```cpp
#include <DipSwitch.h>

int dipSwitchPins[] = {11, 12, 13, 14};
DipSwitch myDipSwitch(dipSwitchPins);

void seup() {
  Serial.begin(9600);
}

void loop() {
  // If DIP Switch state = 0001
  Serial.println(myDipSwitch.read()); // 1

  // If DIP Switch state = 0010
  Serial.println(myDipSwitch.read()); // 2

  // If DIP Switch state = 0011
  Serial.println(myDipSwitch.read()); // 3

  // If DIP Switch state = 1011
  Serial.println(myDipSwitch.read()); // 11
}
```
