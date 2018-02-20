//CARROS
//int led rojo = 7;
//int led amarillo = 4;
//int led azul = 2;
//--------------------------------------
//PEATONES
//int led Verde = 8
//Int led Blanco = 12
//Int Pulsador = 13

void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
}

void loop() {
//PEATONES
if(digitalRead (13) == HIGH){ //NO PULSADO
  digitalWrite(12, HIGH); //BLANCO
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
//CARROS
digitalWrite(2, HIGH);
delay(6000);
digitalWrite(2, LOW);
delay(100);
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);
delay(100);
digitalWrite(7, HIGH);
delay(6000);
digitalWrite(7, LOW);
delay(100);
}else{                     //PULSADO
  digitalWrite(8, HIGH); //VERDE
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(6000);
}

  }



