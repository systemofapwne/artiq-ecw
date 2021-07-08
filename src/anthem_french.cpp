#include "anthem_french.h"
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

void anthem_french() {
    tone(tonePin, 293, 77.25);
    delay(85.8333333333);
    delay(29.1666666667);
    tone(tonePin, 293, 84.75);
    delay(94.1666666667);
    delay(173.333333333);
    tone(tonePin, 293, 75.0);
    delay(83.3333333333);
    delay(55.0);
    tone(tonePin, 391, 306.0);
    delay(340.0);
    delay(48.3333333333);
    tone(tonePin, 391, 294.0);
    delay(326.666666667);
    delay(65.0);
    tone(tonePin, 440, 286.5);
    delay(318.333333333);
    delay(81.6666666667);
    tone(tonePin, 440, 326.25);
    delay(362.5);
    delay(45.0);
    tone(tonePin, 587, 511.5);
    delay(568.333333333);
    delay(11.6666666667);
    tone(tonePin, 493, 178.5);
    delay(198.333333333);
    delay(5.0);
    tone(tonePin, 391, 140.25);
    delay(155.833333333);
    delay(100.833333333);
    tone(tonePin, 391, 75.0);
    delay(83.3333333333);
    delay(49.1666666667);
    tone(tonePin, 493, 138.75);
    delay(154.166666667);
    delay(105.833333333);
    tone(tonePin, 391, 57.75);
    delay(64.1666666667);
    delay(80.8333333333);
    tone(tonePin, 329, 350.25);
    delay(389.166666667);
    delay(17.5);
    tone(tonePin, 523, 636.75);
    delay(707.5);
    delay(86.6666666667);
    tone(tonePin, 440, 144.75);
    delay(160.833333333);
    delay(85.8333333333);
    tone(tonePin, 369, 84.0);
    delay(93.3333333333);
    delay(41.6666666667);
    tone(tonePin, 391, 942.0);
    delay(1046.66666667);
    delay(184.166666667);
    tone(tonePin, 391, 161.25);
    delay(179.166666667);
    delay(81.6666666667);
    tone(tonePin, 440, 109.5);
    delay(121.666666667);
    delay(20.0);
    tone(tonePin, 493, 297.75);
    delay(330.833333333);
    delay(59.1666666667);
    tone(tonePin, 493, 303.0);
    delay(336.666666667);
    delay(63.3333333333);
    tone(tonePin, 493, 324.75);
    delay(360.833333333);
    delay(39.1666666667);
    tone(tonePin, 523, 207.0);
    delay(230.0);
    delay(37.5);
    tone(tonePin, 493, 69.75);
    delay(77.5);
    delay(54.1666666667);
    tone(tonePin, 493, 340.5);
    delay(378.333333333);
    delay(12.5);
    tone(tonePin, 440, 557.25);
    delay(619.166666667);
    delay(189.166666667);
    tone(tonePin, 440, 180.0);
    delay(200.0);
    delay(58.3333333333);
    tone(tonePin, 493, 93.75);
    delay(104.166666667);
    delay(28.3333333333);
    tone(tonePin, 523, 303.75);
    delay(337.5);
    delay(61.6666666667);
    tone(tonePin, 523, 313.5);
    delay(348.333333333);
    delay(52.5);
    tone(tonePin, 523, 314.25);
    delay(349.166666667);
    delay(60.8333333333);
    tone(tonePin, 587, 180.75);
    delay(200.833333333);
    delay(51.6666666667);
    tone(tonePin, 523, 76.5);
    delay(85.0);
    delay(55.8333333333);
    tone(tonePin, 493, 796.5);
    delay(885.0);
    delay(323.333333333);
    tone(tonePin, 587, 120.0);
    delay(133.333333333);
    delay(132.5);
    tone(tonePin, 587, 66.0);
    delay(73.3333333333);
    delay(58.3333333333);
    delay(398.333333333);
    tone(tonePin, 587, 0.75);
    delay(0.833333333333);
    tone(tonePin, 493, 139.5);
    delay(155.0);
    delay(101.666666667);
    tone(tonePin, 391, 110.25);
    delay(122.5);
    delay(25.0);
    tone(tonePin, 587, 347.25);
    delay(385.833333333);
    delay(4.16666666667);
    tone(tonePin, 493, 147.75);
    delay(164.166666667);
    delay(87.5);
    tone(tonePin, 391, 92.25);
    delay(102.5);
    delay(45.0);
    tone(tonePin, 293, 837.75);
    delay(930.833333333);
    delay(142.5);
    tone(tonePin, 293, 61.5);
    delay(68.3333333333);
    delay(61.6666666667);
    tone(tonePin, 293, 141.0);
    delay(156.666666667);
    delay(80.0);
    tone(tonePin, 369, 83.25);
    delay(92.5);
    delay(63.3333333333);
    tone(tonePin, 440, 669.75);
    delay(744.166666667);
    delay(65.8333333333);
    delay(376.666666667);
    tone(tonePin, 523, 4.5);
    delay(5.0);
    tone(tonePin, 440, 180.0);
    delay(200.0);
    delay(62.5);
    tone(tonePin, 369, 90.75);
    delay(100.833333333);
    delay(29.1666666667);
    tone(tonePin, 440, 368.25);
    delay(409.166666667);
    delay(6.66666666667);
    tone(tonePin, 391, 309.0);
    delay(343.333333333);
    delay(61.6666666667);
    tone(tonePin, 349, 672.75);
    delay(747.5);
    delay(70.8333333333);
    tone(tonePin, 329, 357.0);
    delay(396.666666667);
    delay(3.33333333333);
    tone(tonePin, 391, 153.0);
    delay(170.0);
    delay(96.6666666667);
    tone(tonePin, 391, 59.25);
    delay(65.8333333333);
    delay(72.5);
    tone(tonePin, 391, 342.0);
    delay(380.0);
    delay(18.3333333333);
    tone(tonePin, 369, 161.25);
    delay(179.166666667);
    delay(65.8333333333);
    tone(tonePin, 391, 78.0);
    delay(86.6666666667);
    delay(58.3333333333);
    tone(tonePin, 440, 1175.25);
    delay(1305.83333333);
    delay(132.5);
    tone(tonePin, 440, 91.5);
    delay(101.666666667);
    delay(68.3333333333);
    tone(tonePin, 466, 470.25);
    delay(522.5);
    delay(77.5);
    tone(tonePin, 466, 93.0);
    delay(103.333333333);
    delay(82.5);
    tone(tonePin, 466, 120.75);
    delay(134.166666667);
    delay(64.1666666667);
    tone(tonePin, 466, 149.25);
    delay(165.833333333);
    delay(30.8333333333);
    tone(tonePin, 523, 141.75);
    delay(157.5);
    delay(35.8333333333);
    tone(tonePin, 587, 114.75);
    delay(127.5);
    delay(63.3333333333);
    tone(tonePin, 440, 987.75);
    delay(1097.5);
    delay(120.833333333);
    tone(tonePin, 466, 133.5);
    delay(148.333333333);
    delay(52.5);
    tone(tonePin, 440, 123.0);
    delay(136.666666667);
    delay(65.8333333333);
    tone(tonePin, 391, 480.75);
    delay(534.166666667);
    delay(68.3333333333);
    tone(tonePin, 391, 109.5);
    delay(121.666666667);
    delay(82.5);
    delay(204.166666667);
    tone(tonePin, 391, 15.0);
    delay(16.6666666667);
    tone(tonePin, 466, 128.25);
    delay(142.5);
    delay(41.6666666667);
    tone(tonePin, 440, 154.5);
    delay(171.666666667);
    delay(8.33333333333);
    tone(tonePin, 391, 110.25);
    delay(122.5);
    delay(90.8333333333);
    delay(416.666666667);
    tone(tonePin, 391, 6.0);
    delay(6.66666666667);
    tone(tonePin, 369, 507.0);
    delay(563.333333333);
    delay(19.1666666667);
    tone(tonePin, 587, 51.0);
    delay(56.6666666667);
    delay(53.3333333333);
    tone(tonePin, 587, 47.25);
    delay(52.5);
    delay(54.1666666667);
    tone(tonePin, 587, 78.75);
    delay(87.5);
    delay(92.5);
    tone(tonePin, 587, 81.75);
    delay(90.8333333333);
    delay(95.0);
    tone(tonePin, 587, 861.0);
    delay(956.666666667);
    delay(115.0);
    tone(tonePin, 587, 119.25);
    delay(132.5);
    delay(15.8333333333);
    tone(tonePin, 493, 155.25);
    delay(172.5);
    delay(58.3333333333);
    tone(tonePin, 391, 88.5);
    delay(98.3333333333);
    delay(45.0);
    delay(219.166666667);
    tone(tonePin, 587, 36.75);
    delay(40.8333333333);
    delay(44.1666666667);
    tone(tonePin, 587, 37.5);
    delay(41.6666666667);
    delay(69.1666666667);
    tone(tonePin, 587, 99.0);
    delay(110.0);
    delay(94.1666666667);
    tone(tonePin, 587, 42.75);
    delay(47.5);
    delay(49.1666666667);
    tone(tonePin, 587, 40.5);
    delay(45.0);
    delay(58.3333333333);
    tone(tonePin, 587, 73.5);
    delay(81.6666666667);
    delay(97.5);
    tone(tonePin, 587, 97.5);
    delay(108.333333333);
    delay(90.8333333333);
    tone(tonePin, 440, 24.0);
    delay(26.6666666667);
    tone(tonePin, 587, 136.5);
    delay(151.666666667);
    delay(115.833333333);
    tone(tonePin, 587, 48.0);
    delay(53.3333333333);
    delay(73.3333333333);
    tone(tonePin, 587, 844.5);
    delay(938.333333333);
    delay(128.333333333);
    delay(134.166666667);
    tone(tonePin, 587, 3.0);
    delay(3.33333333333);
    tone(tonePin, 493, 113.25);
    delay(125.833333333);
    delay(110.0);
    tone(tonePin, 391, 94.5);
    delay(105.0);
    delay(50.0);
    delay(398.333333333);
    tone(tonePin, 587, 51.75);
    delay(57.5);
    delay(55.8333333333);
    tone(tonePin, 587, 46.5);
    delay(51.6666666667);
    delay(62.5);
    tone(tonePin, 587, 51.0);
    delay(56.6666666667);
    delay(95.8333333333);
    tone(tonePin, 440, 130.5);
    delay(145.0);
    tone(tonePin, 587, 195.0);
    delay(216.666666667);
    delay(54.1666666667);
    delay(4.16666666667);
    tone(tonePin, 587, 290.25);
    delay(322.5);
    delay(75.8333333333);
    tone(tonePin, 293, 63.75);
    delay(70.8333333333);
    tone(tonePin, 391, 788.25);
    delay(875.833333333);
    delay(268.333333333);
    tone(tonePin, 440, 319.5);
    delay(355.0);
    delay(48.3333333333);
    tone(tonePin, 493, 1090.5);
    delay(1211.66666667);
    delay(378.333333333);
    tone(tonePin, 523, 665.25);
    delay(739.166666667);
    delay(60.8333333333);
    tone(tonePin, 587, 309.75);
    delay(344.166666667);
    delay(46.6666666667);
    tone(tonePin, 659, 362.25);
    delay(402.5);
    delay(14.1666666667);
    tone(tonePin, 440, 911.25);
    delay(1012.5);
    delay(173.333333333);
    tone(tonePin, 659, 301.5);
    delay(335.0);
    delay(59.1666666667);
    tone(tonePin, 587, 902.25);
    delay(1002.5);
    delay(72.5);
    delay(144.166666667);
    tone(tonePin, 493, 3.0);
    delay(3.33333333333);
    tone(tonePin, 523, 106.5);
    delay(118.333333333);
    delay(183.333333333);
    delay(81.6666666667);
    tone(tonePin, 440, 24.75);
    delay(27.5);
    tone(tonePin, 391, 1488.75);
    delay(1654.16666667);

}
