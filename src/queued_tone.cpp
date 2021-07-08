#define QUEUE_DO_NOT_OVERWRITE
#include "main.h"
#include "queued_tone.h"

//This program is meant to implement tone() & delay() in a non-blocking way, so we can simultaneously use tone/delay and the "loop()"

struct __attribute__((__packed__)) Tone{
    unsigned int frequency;
    unsigned int duration;
    unsigned int time;
};


static bool do_play = true;
struct Tone g_Tones[128];   // Queue of Tones
static unsigned int g_Time = 0;    // Accumulated delay-time whenever qdelay is called
static unsigned int g_Count = 0;            // Amount of Tones + 1

void qtone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0UL){
    g_Tones[g_Count].frequency = frequency;
    g_Tones[g_Count].duration = duration;
    g_Tones[g_Count].time = g_Time;
    g_Count++;
}

//Adds a delay to the action queue
void qdelay(unsigned long ms){
    g_Time += ms;
}

//Parses a sound, which has been queuified by passing the queuified function
void midi_prepare(void (*midi)()){
    Serial.println("MIDI: Prepare");
    g_Time = 0;
    g_Count = 0;
    (*midi)();
    do_play = true;
}

//Atomic "non-blocking" function, which works on the queue and begins playing a tone
static unsigned int next = 0;
static unsigned long start = 0;
void midi_play(){
    if(!do_play) return;

    unsigned long time = millis();
    if(start == 0){
        start = time;
    }
    time -= start;

    for(int i = next; i < g_Count; i++){
        struct Tone note = g_Tones[i];
        if(((unsigned long) note.time) < time){
            next = i + 1;
            tone(P_SPKR, note.frequency, note.duration);
        }
    }
}

//Restarts a song
void midi_restart(){
    start = 0;
    next = 0;
    do_play = true;
}

void midi_stop(){
    do_play = false;
}