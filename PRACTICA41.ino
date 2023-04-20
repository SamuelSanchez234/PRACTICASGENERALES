#define PUL A4



#define FOQUITO 4
int lectura;
boolean ACTIVADO=0;





void setup() {






pinMode (PUL, INPUT);
Serial.begin(9600);
pinMode (FOQUITO, OUTPUT);






}






void loop() {



lectura = analogRead(FOQUITO);



Serial.println(lectura);
delay(100);
if (lectura < 100){
 digitalWrite(FOQUITO,HIGH);
 }
if(lectura > 110){
digitalWrite(FOQUITO,LOW);
 }
/*
if (digitalRead (PUL) == 1) {
ACTIVADO = !ACTIVADO;

 

  if(ACTIVADO == 1){
digitalWrite(FOQUITO, LOW);
  }
  else{
  digitalWrite(FOQUITO, HIGH);
  }
}*/
}