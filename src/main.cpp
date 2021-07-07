#include <Arduino.h>

#define P_SPKR 8

#define P_DEV0 2
#define P_DEV1 3
#define P_DEV2 4
#define P_DEV3 5

#define P_BTN 6

#define P_LED_R 9
#define P_LED_G 11
#define P_LED_B 10

void setup() {
  // "Artiq" devices connected via "EEM" cables
  pinMode(P_DEV0, INPUT_PULLUP);
  pinMode(P_DEV1, INPUT_PULLUP);
  pinMode(P_DEV2, INPUT_PULLUP);
  pinMode(P_DEV3, INPUT_PULLUP);

  // LED
  pinMode(P_LED_R, OUTPUT);
  pinMode(P_LED_G, OUTPUT);
  pinMode(P_LED_B, OUTPUT);

  // Sinara Tester
  pinMode(P_BTN, INPUT_PULLUP);
}

void led(bool r, bool g, bool b, float timeout = 0.0){
  digitalWrite(P_LED_R,r);
  digitalWrite(P_LED_G,g);
  digitalWrite(P_LED_B,b);
  delay(timeout);
}

void loop() {
  if(
    !digitalRead(P_BTN) ||
    !digitalRead(P_DEV0) ||
    !digitalRead(P_DEV1) ||
    !digitalRead(P_DEV2) ||
    !digitalRead(P_DEV3)
  ){
    led(false,false,true,1000);
    led(true,true,true,1000);
    led(true,false,false,1000);
  }
  else {
    led(true,true,true,1000);
    led(false,false,true,1000);
    led(true,false,false,1000);
  }
  led(false,false,false,500);
}