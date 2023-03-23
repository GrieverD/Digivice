
int hambre = 0;
int fuerza =0;
int pop =0;
int Felicidad =0;

  
void Mcomida() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(15, 20);
  display.print("Carne");
  display.display();
  delay(300);
  if(estado2 == 1) {
    hambre++;
    estado2--;
    delay(300);
  }
}
void Mfuerza() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(12, 20);
  display.print("Vitamina");
  display.display();
  delay(300);
  if(estado2 ==1) {
    fuerza++;
    estado--;
    delay(300);
  }
}

void stats() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Hambre: ");
  display.print(hambre);
  display.setTextColor(WHITE);
  display.setCursor(0, 20);
  display.print("Fuerza: ");
  display.print(fuerza);
  display.setCursor(0, 40);
  display.print("Feliz:  ");
  display.print(Felicidad);
  display.display();
  delay(300);
}
