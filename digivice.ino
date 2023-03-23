#include "DigiviceMain.h"
#include "Cuidados.h"
void loop() {
  
  unsigned long currentMillis = millis();
  int boton = digitalRead(botone);
  Serial.println(botone);
  Serial.println(estado);
int boton2 = digitalRead(botton2);

  if (boton2 == HIGH) {
    estado2++;
    if (estado2 > 1) estado = 0;
    delay(100); // Delay para evitar lecturas múltiples del botón
  }
  

   // boton de navegacion.
  if (boton == HIGH) {
    estado++;
    if (estado > 4) estado = 0;
    delay(100); // Delay para evitar lecturas múltiples del botón
  }

  switch (estado) {
    case 0:
    Animacion1Loop();
    runClock();
    break;
    
    case 1:
    printTimeLoop();
    runClock();
    break;

    case 2:
    Mcomida();
    runClock();
    break;

    case 3:
    Mfuerza();
    runClock();
    break;

    case 4:
    stats();
    runClock();
    break;
  }
}
