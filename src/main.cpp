#include <Arduino.h>
#include <TFT_eSPI.h>
#include <CellularAutomata.h>

/*
  Connections:
  ST7789:            ESP32:
  SCL (clock) ------- GPIO_19
  SDA (data in) ----- GPIO_18
  RES (reset) ------- GPIO_5
  DC (data/command) - GPIO_17
  CS (chip select) -- GPIO_16
  BLK (blank  backlit) -- GPIO_4

Resolution: 240px x 280px
Size: 1.69 inch
*/

TFT_eSPI tft = TFT_eSPI();
CellularAutomata automata(tft);

void setup() {
    automata.setup();
}

void loop() {
    automata.loop();
}

