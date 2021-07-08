#pragma once
#ifndef QUEUED_TONE_H
#define QUEUED_TONE_H

#include <Arduino.h>

//Overwrite "tone" and "delay" with our functions for a queued tone
#ifndef QUEUE_DO_NOT_OVERWRITE

#define tone qtone
#define delay qdelay

#endif //QUEUED_TONE_OVERWRITE

void qdelay(unsigned long ms);
void qtone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0UL);

void midi_prepare(void (*midi)());
void midi_play();
void midi_restart();
void midi_stop();


#endif //QUEUED_TONE_H