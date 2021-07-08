#pragma once
#ifndef LED_H
#define LED_H

#include "main.h"

//Directly sets the LED color
void led_reset(bool turn_off = true);

//Enqueue an LED state to the loop
void set_led(bool r, bool g, bool b);

//Purge the LED queue
void led_enqueu(bool r, bool g, bool b, int duration);

// Play the sequence of leds
void led_play();

#endif //LED_H