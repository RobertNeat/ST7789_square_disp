# ST7789 square display

This project is the user setup for ST7789 working with TFTeSPI.

Pin setup is as follows (can be changed in UserSetup.h):

```
  ST7789:            ESP32:
  SCL (clock) ------- GPIO_19
  SDA (data in) ----- GPIO_18
  RES (reset) ------- GPIO_5
  DC (data/command) - GPIO_17
  CS (chip select) -- GPIO_16
  BLK (blank  backlit) -- GPIO_4
```

Display properties:

- Screen technology: TFT IPS
- Interface: SPI (but pinout looks like I2C)
- Colour display
- Resolution: 240px x 280px
- Width: 280 px (X) [verigy with my notes]??
- Height: 240 px (Y) [verigy with my notes]??
- Size: 1.69 inch
- Brightness: 480 CD/m2
- Logic voltage: 3.3 V
