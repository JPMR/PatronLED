
/*
 * patron LED
 * Este programa encendera y apagara una serie de LEDs ubicados en los pines 13, 8, 7, 4, 2, teniendo un boton en el pin 12
 * 
 * Hecho por Jean Pierre M.
 * 28 de junio 2017
 * JPMR.
 */


void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(12, INPUT_PULLUP);
}

void parpadear(int p) {
  digitalWrite(p, HIGH);
  delay(1000);
  digitalWrite(p, LOW);
  delay(400);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  byte estadoBoton = !digitalRead(12);
  if (estadoBoton == 1) {//verificamos el boton
    //verificamos opciones
    while (x <= 5){
      x++;
      if (x == 1){
        parpadear(8);
      }
      if (x == 2){
        parpadear(13);
      } 
      if (x == 3){
        parpadear(2);
      } 
      if (x == 4){
        parpadear(4);
      } 
      if (x == 5){
        parpadear(7);
      }  
    }
    x = 0;
  }
}
