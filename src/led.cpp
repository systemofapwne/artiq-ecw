#include "led.h"

struct __attribute__((__packed__)) LED{
    bool r;
    bool g;
    bool b;
    unsigned int time;
};

struct LED g_LEDs[10];      // Queue of LED states
static unsigned int g_Time = 0;    // Accumulated delay-time
static unsigned int g_Count = 0;            // Amount of LED states + 1

void set_led(bool r, bool g, bool b){
  digitalWrite(P_LED_R,r);
  digitalWrite(P_LED_G,g);
  digitalWrite(P_LED_B,b);
}

void led_enqueu(bool r, bool g, bool b, int duration = 0){
    Serial.println("LED: Enqueue");
    g_LEDs[g_Count].r = r;
    g_LEDs[g_Count].g = g;
    g_LEDs[g_Count].b = b;
    g_LEDs[g_Count].time = g_Time;
    g_Time += duration;
    g_Count++;
}

static unsigned int next = 0;
static unsigned long start = 0;
void led_reset(bool turn_off = true){
    next = 0;
    start = 0;
    g_Time = 0;
    g_Count = 0;
    if(turn_off) set_led(false, false, false);
}

//Updates the LED colors (mainly for showing the country-color-code flags or blinking)
void led_play(){
    unsigned long time = millis();
    if(start == 0){
        start = time;
    }
    time -= start;

    for(int i = next; i < g_Count; i++){
        struct LED led = g_LEDs[i];
        if(((unsigned long) led.time) < time){
            next = i + 1;
            set_led(led.r, led.g, led.b);
        }
    }

    //Reset/Loop
    if(next >= g_Count){
        next = 0;
        start = 0;
        g_Time = 0;
    }
}