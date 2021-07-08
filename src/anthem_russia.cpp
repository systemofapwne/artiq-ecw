#include "anthem_russia.h"
#include "queued_tone.h"

// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0


// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

/*
void anthem_russia() {
    tone(tonePin, 523, 1421.0325);
    delay(1578.925);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 493, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 220, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 349, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 174, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 473.6775);


    delay(526.308333333);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 659, 473.6775);
    delay(526.308333333);
    tone(tonePin, 587, 355.258125);
    delay(394.73125);
    tone(tonePin, 523, 118.419375);
    delay(131.577083333);
    tone(tonePin, 587, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 493, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 355.258125);
    delay(394.73125);
    tone(tonePin, 369, 118.419375);
    delay(131.577083333);
    tone(tonePin, 246, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 587, 236.83875);
    delay(263.154166667);
    tone(tonePin, 659, 947.355);
    delay(1052.61666667);
    tone(tonePin, 587, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 587, 710.51625);
    delay(789.4625);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 246, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 947.355);
    delay(1052.61666667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 710.51625);
    delay(789.4625);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 195, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 355.258125);
    delay(394.73125);
    tone(tonePin, 493, 118.419375);
    delay(131.577083333);
    tone(tonePin, 261, 473.6775);
    delay(526.308333333);
    tone(tonePin, 440, 355.258125);
    delay(394.73125);
    tone(tonePin, 391, 118.419375);
    delay(131.577083333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 698, 947.355);
    delay(1052.61666667);
    tone(tonePin, 349, 473.6775);
    delay(526.308333333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 659, 710.51625);
    delay(789.4625);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 947.355);
    delay(1052.61666667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 415, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 523, 710.51625);
    delay(789.4625);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 947.355);
    delay(1052.61666667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 355.258125);
    delay(394.73125);
    tone(tonePin, 261, 118.419375);
    delay(131.577083333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 355.258125);
}
*/


void anthem_russia(){
    //Copied over from track above
    tone(tonePin, 523, 1421.0325);
    delay(1578.925);
    delay(263.154166667);

    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 493, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 349, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 710.51625);

    /*
    delay(789.4625);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 659, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 523, 118.419375);
    delay(131.577083333);
    tone(tonePin, 587, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 355.258125);
    delay(394.73125);
    tone(tonePin, 369, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 947.355);
    delay(1052.61666667);
    tone(tonePin, 659, 947.355);
    delay(1052.61666667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 587, 710.51625);
    delay(789.4625);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 947.355);
    delay(1052.61666667);
    tone(tonePin, 523, 947.355);
    delay(1052.61666667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 369, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 369, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 710.51625);
    delay(789.4625);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 473.6775);
    delay(526.308333333);
    delay(526.308333333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 355.258125);
    delay(394.73125);
    tone(tonePin, 391, 118.419375);
    delay(131.577083333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 355.258125);
    delay(394.73125);
    tone(tonePin, 493, 118.419375);
    delay(131.577083333);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 710.51625);
    delay(789.4625);
    delay(263.154166667);
    tone(tonePin, 698, 947.355);
    delay(1052.61666667);
    tone(tonePin, 659, 236.83875);
    delay(263.154166667);
    tone(tonePin, 587, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 659, 710.51625);
    delay(789.4625);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 947.355);
    delay(1052.61666667);
    tone(tonePin, 349, 947.355);
    delay(1052.61666667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 710.51625);
    delay(789.4625);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 947.355);
    delay(1052.61666667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 355.258125);
    delay(394.73125);
    tone(tonePin, 261, 118.419375);
    delay(131.577083333);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 493, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 349, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 293, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 293, 473.6775);
    delay(526.308333333);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 236.83875);
    delay(263.154166667);
    tone(tonePin, 493, 710.51625);
    delay(789.4625);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 659, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 355.258125);
    delay(394.73125);
    tone(tonePin, 523, 118.419375);
    delay(131.577083333);
    tone(tonePin, 587, 473.6775);
    delay(526.308333333);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 355.258125);
    delay(394.73125);
    tone(tonePin, 440, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 329, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 473.6775);
    delay(526.308333333);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 349, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 473.6775);
    delay(526.308333333);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 261, 236.83875);
    delay(263.154166667);
    tone(tonePin, 523, 473.6775);
    delay(526.308333333);
    tone(tonePin, 329, 355.258125);
    delay(394.73125);
    tone(tonePin, 369, 118.419375);
    delay(131.577083333);
    tone(tonePin, 391, 947.355);
    delay(1052.61666667);
    tone(tonePin, 659, 947.355);
    delay(1052.61666667);
    tone(tonePin, 493, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 440, 236.83875);
    delay(263.154166667);
    tone(tonePin, 587, 710.51625);
    delay(789.4625);
    tone(tonePin, 391, 236.83875);
    delay(263.154166667);
    tone(tonePin, 391, 947.355);
    delay(1052.61666667);
    tone(tonePin, 523, 947.355);
    */
}