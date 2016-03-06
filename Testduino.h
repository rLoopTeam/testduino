#ifndef TestduinoOverride_h
#define TestduinoOverride_h

#include "Testduino/Testduino.h"
#define pinMode(pin, mode) Testduino::pinMode(pin, mode)

#define digitalRead(pin) Testduino::digitalRead(pin)
#define digitalWrite(pin, value) Testduino::digitalWrite(pin, value)

#endif
