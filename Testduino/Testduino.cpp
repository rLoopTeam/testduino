#include "Arduino.h"
#include "Testduino.h"

bool didInit = false;

Testduino::Testduino()
{
};

void Testduino::ensureInit() {
  // This only works once.
  if (didInit) return;
  didInit = true;
  Serial.begin(9600);
}

void Testduino::sendPinState(int type, int pin, int value) {
  ensureInit();
  // TODO: This is probobly really expensive, we should buffer it.
  Serial.print('+'); // setting pin state
  Serial.print(type, HEX);
  Serial.print(',');
  Serial.print(pin, HEX);
  Serial.print(',');
  Serial.println(value, HEX);
};

int Testduino::getPinState(int type, int pin) {
  ensureInit();
  Serial.print('-'); // Getting pin state
  Serial.print(type, HEX);
  Serial.print(',');
  Serial.println(pin, HEX);
  return Serial.parseInt();
};

void Testduino::pinMode(int pin, int mode) {
  sendPinState(0, pin, mode);
};

int Testduino::digitalRead(int pin) {
  return getPinState(1, pin);
};

void Testduino::digitalWrite(int pin, int value) {
  sendPinState(2, pin, value);
};
