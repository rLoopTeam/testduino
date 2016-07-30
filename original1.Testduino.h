#ifndef testduino_h
#define testduino_h

#include "Arduino.h"

class Testduino
{
  public:
    Testduino();
    void pinMode(int pin, int mode);
//    int digitalRead(int pin);
  private:
    void sendPinState(int type, int pin, int value);
//    int _pin;
};

#define pinMode Testduino.pinMode

//#define digitalRead Testduino.digitalRead
//#define digitalWrite Testduino.digitalWrite
//
//#define analogRead Testduino.analogRead
//#define analogWrite Testduino.analogWrite
// #define analogReference __testduino_analogReference__

#endif
