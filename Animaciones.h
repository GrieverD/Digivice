
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
#include "Digimons.h"
#include "DigiviceMain.h" 
extern long movimiento;

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

int counter = 1;
int Alazar = 0;
long movimiento = 6;

unsigned long tiempoAnterior = 0;
int semilla = 0;

void Animacion1() {
  static int xPos = 0;
  static int yPos = 0;
  static int xScale = 0;
      
  long movimiento = 6;

  if (movimiento > 0) {
    display.clearDisplay();
    display.drawBitmap(xPos, 25, Agumon1_bmp, 40, 40, 1);
    display.display();
    delay(300);
    display.clearDisplay();
    display.drawBitmap(xPos, 25, Agumon2_bmp, 40, 40, 1);
    display.display();
    delay(300);

  } else {
    display.clearDisplay();
    display.drawBitmap(xPos, 25, Agumon4_bmp, 40, 40, 1);
    display.display();
    delay(300);

    display.clearDisplay();
    display.drawBitmap(xPos, 25, Agumon3_bmp, 40, 40, 1);
    display.display();
    delay(300);
  }

  xPos = xPos + movimiento;

  if (xPos >= 128 - Agumon_WIDTH || xPos < 0) {
    movimiento = -movimiento;
    xPos = xPos + movimiento;
    for (int i = 0; i < 13; i++) {
      if (movimiento == -movimiento) {
        display.clearDisplay();
        display.drawBitmap(xPos, 25, Agumon1_bmp, 40, 40, 1);
        display.display();
        delay(300);
        display.clearDisplay();
        display.drawBitmap(xPos, 25, Agumon2_bmp, 40, 40, 1);
        display.display();
        delay(300);
      } else {
        display.clearDisplay();
        display.drawBitmap(xPos, 25, Agumon4_bmp, 40, 40, 1);
        display.display();
        delay(300);
        display.clearDisplay();
        display.drawBitmap(xPos, 25, Agumon3_bmp, 40, 40, 1);
        display.display();
        delay(300);
      }
      xPos = xPos + movimiento;
    }
  }
}
