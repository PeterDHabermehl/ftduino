#include <Arduino.h>
#include <avr/pgmspace.h>
#include "gfx.h"

const uint8_t spaceship_bmp[] PROGMEM = {
  B00110000, B00000000,
  B00111000, B11100000,
  B01111100, B10000000,
  B11111111, B10000000,
  B01111111, B11000000,
  B00111111, B11100000,
  B00111111, B11111100,
  B00111111, B11100000,
  B01111111, B11000000,
  B11111111, B10000000,
  B01111100, B10000000,
  B00111000, B11100000,
  B00110000, B00000000,
  B00110000, B00000000,
};

const uint8_t asteroid_anim[] PROGMEM = {
  B00011110, B00000000,
  B01111111, B00000000,
  B01111111, B11000000,
  B11111111, B11000000,
  B11111111, B11110000,
  B11111111, B11110000,
  B11111111, B11110000,
  B11111111, B11110000,
  B01111111, B11110000,
  B00011111, B11000000,
  B00000111, B10000000,
  B00000111, B10000000,

  B00001111, B10000000,
  B00111111, B11000000,
  B00111111, B11110000,
  B01111111, B11110000,
  B11111111, B11110000,
  B11111111, B11110000,
  B11111111, B11000000,
  B11111111, B11000000,
  B01111111, B10000000,
  B01111111, B10000000,
  B00011111, B00000000,
  B00011111, B00000000,

  B00111100, B00000000,
  B01111111, B00000000,
  B11111111, B11000000,
  B11111111, B11110000,
  B11111111, B11110000,
  B11111111, B11110000,
  B11111111, B11110000,
  B01111111, B11110000,
  B01111111, B11000000,
  B00011111, B11000000,
  B00001111, B00000000,
  B00001111, B00000000,
};

const unsigned char explosion_anim[] PROGMEM = {
  B00000000, B00000000,
  B01000000, B10000000,
  B00100001, B00000000,
  B00001100, B00000000,
  B00011110, B00000000,
  B00011110, B00000000,
  B00001100, B00000000,
  B00100001, B00000000,
  B01000000, B10000000,
  B00000000, B00000000,

  B10000000, B01000000,
  B01000000, B10000000,
  B00001100, B00000000,
  B00010010, B00000000,
  B00100001, B00000000,
  B00100001, B00000000,
  B00010010, B00000000,
  B00001100, B00000000,
  B01000000, B10000000,
  B10000000, B01000000,

  B10000000, B01000000,
  B00011110, B00000000,
  B00100001, B00000000,
  B01000000, B10000000,
  B01000000, B10000000,
  B01000000, B10000000,
  B01000000, B10000000,
  B00100001, B00000000,
  B00011110, B00000000,
  B10000000, B01000000,

  B00011110, B00000000,
  B00100001, B00000000,
  B01000000, B10000000,
  B10000000, B01000000,
  B10000000, B01000000,
  B10000000, B01000000,
  B10000000, B01000000,
  B01000000, B10000000,
  B00100001, B00000000,
  B00011110, B00000000,
};