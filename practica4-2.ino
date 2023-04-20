#include <Servo.h>
Servo servo1;
int posicion_inicial = 100;
int posicion1 = 45;
int posicion2 = 90;
int posicion3 = 135;
int posicion4 = 180;
int pulsador1 = 2;
int pulsador2 = 3;
int pulsador3 = 4;
int pulsador4 = 5;
int pulsador5 = 6;
int estado1;
int estado2;
int estado3;
int estado4;
int estado5;




void setup() {
Serial.begin(9600);
pinMode(pulsador1,INPUT);
pinMode(pulsador2,INPUT);
pinMode(pulsador3,INPUT);
pinMode(pulsador4,INPUT);
servo1.attach(10);
}
void loop(){
estado1 = digitalRead(pulsador1);
 Serial.println(estado1);
estado2 = digitalRead(pulsador2);
estado3 = digitalRead(pulsador3);
estado4 = digitalRead(pulsador4);
estado5 = digitalRead(pulsador5);



if(estado1 == 1){
 servo1.write(posicion1);
 }



 if(estado2 == 1){
 servo1.write(posicion2);
 }
 if(estado3 == 1){
 servo1.write(posicion3);
}
if(estado4 == 1){
 servo1.write(posicion4);
 }
 if(estado5 == 1){
 servo1.write(0);
tone(8,15000);
delay(1000);
noTone(8);
 }
}