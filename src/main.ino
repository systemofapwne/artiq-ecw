#include "main.h"

#define QUEUE_DO_NOT_OVERWRITE
#include "queued_tone.h"
#include "led.h"

void setup() {
  Serial.begin(9600);
  Serial.println("Booting:");

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

  //Parse song
  midi_prepare(*anthem_russia);

  // Russian flag
  led_enqueu(true,true,true, 1000);
  led_enqueu(false,false,true, 1000);
  led_enqueu(true,false,false, 1000);
  led_enqueu(false, false, false, 500);
  led_enqueu(false, false, false, 500);
}

unsigned long next = 0;

void loop() {
  unsigned long time = millis();

  delay(1);
  
  midi_play();
  led_play();

  // Artiq sinara checker
  if(!digitalRead(P_BTN)){
    if(next < time){      //De-bounce/de-glitch
      
      bool d0 = digitalRead(P_DEV0);
      bool d1 = digitalRead(P_DEV1);
      bool d2 = digitalRead(P_DEV2);
      bool d3 = digitalRead(P_DEV3);

      int count = 0;
      d0 ? count++ : false;
      d1 ? count++ : false;
      d2 ? count++ : false;
      d3 ? count++ : false;

      int ERROR_TONE = 500;

      midi_stop();    //Stop playing music
      led_reset();    // Disable whatever mode we were in earlier
      switch(count){
        case 4:         //All wrong
          set_led(false,false,false);    // All Off
          tone(P_SPKR, ERROR_TONE, 3000);
          break;
        case 3:         //Got 1
          set_led(false,false,true);    // Blue
          tone(P_SPKR, ERROR_TONE, 2000);
          break;
        case 2:         //Got 2
          set_led(true,true,true);      // White
          tone(P_SPKR, ERROR_TONE, 1000);
          break;
        case 1:         //Got 3
          set_led(true,false,false);    // Red
          tone(P_SPKR, ERROR_TONE, 500);
          break;
        case 0:         //Got 4
          //French flag
          led_enqueu(false,false,true, 1000);
          led_enqueu(true,true,true, 1000);
          led_enqueu(true,false,false, 1000);
          led_enqueu(false, false, false, 500);
          led_enqueu(false, false, false, 500);

          midi_prepare(*anthem_french);
          midi_restart();
          break;
      }

      //midi_restart();
      next = time + 250;
    }
  }

  /*
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
  */
}