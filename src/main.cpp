#include <Arduino.h>
int analog_val = 0;
void setup()
{
  // pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  analog_val = analogRead(A0);
  float voltage = analog_val * (5.0 / 1023.0);
  Serial.println(voltage);
  delay(100);
  // digitalWrite(LED_BUILTIN, HIGH);
  // Serial.println("led is now on");
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  // Serial.println("led is now off");
  // delay(1000);
}
