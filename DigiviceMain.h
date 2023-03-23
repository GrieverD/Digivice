#pragma once
#include "Reloj.h"
#include "Animaciones.h"


int botone = 16;
int estado = 0;
int botton2 = 15;
int estado2 = 0;

bool showAnimation = true;

void setup() {
  pinMode(botone,INPUT);
  digitalWrite(botone,LOW);
  setupReloj();
  pinMode(botton2, INPUT);
  digitalWrite(botton2,LOW);


  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Wire.begin(5, 4);

  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }

  display.display();
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();
}


void Animacion1Loop() {
  
  Animacion1();
}

void printTimeLoop(){
  printTime();
}

  
//Animacion1();
//  runClock();
//  printTime();
