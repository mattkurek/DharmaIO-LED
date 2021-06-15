#include <Arduino.h>

#include <DharmaIO_LED.h>

#define LED_PIN 8
#define ON_DURATION 500

LED myLED;

unsigned long startMillis;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting...");

  myLED.begin(LED_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("blink start");
  myLED.blink();
  Serial.println("blink end");
  delay(500);
 
}