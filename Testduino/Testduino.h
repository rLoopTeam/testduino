#ifndef Testduino_h
#define Testduino_h

#include "Arduino.h"

class Testduino
{
  public:
    Testduino();
    static void pinMode(int pin, int mode);
  private:
    static void sendPinState(int type, int pin, int value);
};

//#define digitalRead Testduino.digitalRead
//#define digitalWrite Testduino.digitalWrite
//
//#define analogRead Testduino.analogRead
//#define analogWrite Testduino.analogWrite
// #define analogReference __testduino_analogReference__

#endif
