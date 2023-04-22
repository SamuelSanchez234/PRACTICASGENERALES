#define LDR A4
#define foco 4
int lectura;
boolean ACTIVADO=0;
void setup() {
pinMode (LDR, INPUT);
Serial.begin(9600);
pinMode (foco, OUTPUT);
}

void loop() {
lectura = analogRead(foco);
Serial.println(lectura);
delay(100);
if (lectura < 100){
 digitalWrite(foco,HIGH);
 }
if(lectura > 110){
digitalWrite(foco,LOW);
 }
/*
if (digitalRead (LDR) == 1) {
ACTIVADO = !ACTIVADO;

 

  if(ACTIVADO == 1){
digitalWrite(foco, LOW);
  }
  else{
  digitalWrite(foco, HIGH);
  }
}*/
}
