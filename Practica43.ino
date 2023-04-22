int pul1 = A0;
int pul2 = A1;
int pul3 = A2;
int pul4 = A3;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;
int led8 = 10;
int led9 = 11;
int led10 = 12;
int posicion1;
int posicion2;
int posicion3;
int posicion4;

void setup(){
Serial.begin(9600);
pinMode(pul1,INPUT);
pinMode(pul2,INPUT);
pinMode(pul3,INPUT);
pinMode(pul4,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);

}

void loop(){
 estado1 = digitalRead(pul1);
 estado2 = digitalRead(pul2);
 estado3 = digitalRead(pul3);
 estado4 = digitalRead(pul4);
  Serial.println(posicion1);
    Serial.println(posicion2);
  Serial.println(posicion3);
  Serial.println(posicion4);
delay(1000);

  if(estado1 == 1){
      digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(1000);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(1000);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(1000);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000); 
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
          digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(1000);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(1000);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(1000);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(2000);
        digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(1000);
    
          digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(1000);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(1000);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(1000);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
        digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
          digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(1000);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(1000);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(1000);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
        digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
        
  }
  
  if(estado2 == 1){
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
  }
  if(estado3 == 1){
   digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  }
  
  if(estado4 == 1){
   digitalWrite(led1, HIGH);                       
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

   digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

    
       digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(1000);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(1000);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

  }
}
