#ifndef DharmaIO_LED_h
#define DharmaIO_LED_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class LED
{
private:

public:

    byte pin = 0;

    LED();

    void begin(byte pin);

    void on();
    void off();

    void blink(int time = 500);

};

#endif /* DharmaIO_LED_h */
