#include <Servo.h>
Servo servo1;
int posicion_inicial = 100;
int pos1 = 45;
int poS2 = 90;
int pos3 = 135;
int pos4 = 180;
int pul1 = 2;
int pul2 = 3;
int pul3 = 4;
int puls4 = 5;
int pul5 = 6;
int lugar1;
int lugar2;
int lugar3;
int lugar4;
int lugar5;

void setup() {
Serial.begin(9600);
pinMode(pul1,INPUT);
pinMode(pul2,INPUT);
pinMode(pul3,INPUT);
pinMode(pul4,INPUT);
servo1.attach(10);
}
void loop(){
estado1 = digitalRead(pul1);
 Serial.println(estado1);
estado2 = digitalRead(pul2);
estado3 = digitalRead(pul3);
estado4 = digitalRead(pul4);
estado5 = digitalRead(pul5);
 
if(lugar1 == 1){
 servo1.write(pos1);
 }
 
 if(lugar2 == 1){
 servo1.write(pos2);
 }
 
 if(lugar3 == 1){
 servo1.write(pos3);
}
 
if(lugar4 == 1){
 servo1.write(pos4);
 }
 
 if(lugar5 == 1){
 servo1.write(0);
tone(8,15000);
delay(1000);
noTone(8);
 }
}
