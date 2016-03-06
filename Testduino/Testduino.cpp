#include "Arduino.h"
#include "Testduino.h"

Testduino::Testduino()
{
};

void Testduino::sendPinState(int type, int pin, int value) {
  // TODO: This is probobly really expensive, we should buffer it.
  Serial.begin(9600);
  Serial.print(type, HEX);
  Serial.print(',');
  Serial.print(pin, HEX);
  Serial.print(',');
  Serial.println(value, HEX);
};

void Testduino::pinMode(int pin, int mode) {
  sendPinState(0, pin, mode);
};
