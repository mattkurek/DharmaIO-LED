#include <Arduino.h>
#include "DharmaIO_LED.h"

LED::LED() {
    
}

void LED::begin(byte pin)
{
    this->pin = pin;
    pinMode(this->pin, OUTPUT);
    digitalWrite(this->pin, LOW);
}

void LED::blink(int time) {
    // i will make this non-blocking later
    on();
    delay(time);
    off();
}

void LED::on()
{
    digitalWrite(this->pin, HIGH);
}

void LED::off()
{
    digitalWrite(this->pin, LOW);
}