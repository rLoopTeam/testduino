#ifndef TestduinoClass_h
#define TestduinoClass_h

#include "Arduino.h"

class Testduino
{
  public:
    Testduino();
    static void pinMode(int pin, int mode);
    static int digitalRead(int pin);
    static void digitalWrite(int pin, int value);
  private:
    static void ensureInit();
    static void sendPinState(int type, int pin, int value);
    static int getPinState(int type, int pin);
};

//#define digitalRead Testduino.digitalRead
//#define digitalWrite Testduino.digitalWrite
//
//#define analogRead Testduino.analogRead
//#define analogWrite Testduino.analogWrite
// #define analogReference __testduino_analogReference__

#endif
