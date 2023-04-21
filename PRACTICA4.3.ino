int pulsador1 = 2;
int pulsador2 = 3;
int pulsador3 = 4;
int pulsador4 = 5;
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
int led5 = 10;
int led6 = 11;
int led7 = 12;
int led8 = A0;
int led9 = A1;
int led10 = A2;
int estado1;
int estado2;
int estado3;
int estado4;

void setup(){
Serial.begin(9600);
pinMode(pulsador1,INPUT);
pinMode(pulsador2,INPUT);
pinMode(pulsador3,INPUT);
pinMode(pulsador4,INPUT);
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
 estado1 = digitalRead(pulsador1);
 estado2 = digitalRead(pulsador2);
 estado3 = digitalRead(pulsador3);
 estado4 = digitalRead(pulsador4);
  Serial.println(estado1);
    Serial.println(estado2);
  Serial.println(estado3);
  Serial.println(estado4);
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
