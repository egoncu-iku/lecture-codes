#include <Arduino.h>
#include <analogWrite.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}
float analogIn = 0;
float analogOut = 0.0;
float voltage = 0.0;
void loop() {
 analogOut += 25.0;
 analogWrite(25, analogOut);
 analogIn = analogRead(36);

 voltage = analogIn * 3.3 / 4095.0;
 
 Serial.println(analogOut);
 Serial.println(voltage);
 delay(2000);

}
