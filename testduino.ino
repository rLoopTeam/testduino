#include "Testduino.h"

void setup()
{
  // put your setup code here, to run once:
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
};

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(6, digitalRead(5));
  delay(5000);
};
