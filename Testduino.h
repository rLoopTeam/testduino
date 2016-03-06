#ifndef Testduino_h
#define Testduino_h

#include "Testduino/Testduino.h"
#define pinMode(pin, mode) Testduino::pinMode(pin, mode)

#define digitalRead(pin) Testduino::digitalRead(pin)
#define digitalWrite(pin, value) Testduino::digitalWrite(pin, value)

#endif
