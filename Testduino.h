#ifndef TestduinoOverride_h
#define TestduinoOverride_h

#include "Testduino/Testduino.h"
#define pinMode(pin, mode) Testduino::pinMode(pin, mode);

#endif
