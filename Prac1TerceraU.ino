//Christian Marroquín
#include <Wire.h> //librerias utilizadas
#include <LiquidCrystal_I2C.h>
#define lcdAddress 0x27  
#define filas 2
#define columnas 16
LiquidCrystal_I2C lcd(lcdAddress, columnas, filas);
const int boton_1 = 4; //constantes que se utilizan
const int boton_2 = 2;
const int buzzer = 3;
const int trig = 10;
const int echo = 11;
float tempo;
float dis;
const float val = 58.2; 
int lee;
#define mini 6 //definimos entradas y salidas
#define salida_B() pinMode(mini,OUTPUT)
#define apagar_B() digitalWrite(mini,HIGH)
#define encender_B() digitalWrite(mini,LOW)
#define salida() pinMode(trig,OUTPUT)
#define entrada() pinMode(echo,INPUT) 
void setup() { //abrimos la primera funcion
 lcd.init();
 lcd.backlight();
 salida();
 entrada();
 salida_B();
 Serial.begin(9600);
 attachInterrupt(digitalPinToInterrupt(boton_2),C,RISING);
 attachInterrupt(digitalPinToInterrupt(boton_1),M,RISING);
}
void C(){ //abrimos la segunda funcion
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Extrallendo");
  delay(2000);
  lcd.clear();
}
void M(){ //abrimos la tercera funcion
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Hay");
  lcd.setCursor(2,1);
  lcd.print("error");
  delay(2000);
  lcd.clear();
}
void G(){ //abrimos la cuarta funcion
  if(dis<9){
    lcd.setCursor(0,1);
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
  if(dis<8){
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
  if(dis<7){
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
  if(dis<6){
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
  if(dis<5){
    lcd.print("/");
    delay(100);
  }
  if(dis<4){
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
  if(dis<3){
    lcd.print("/");
    delay(100);
    lcd.print("/");
    delay(100);
  }
}
void loop() { //definimos una ultima funcion
  digitalWrite(trig, LOW);
  delayMicroseconds (2);
  digitalWrite(trig, HIGH);
  delayMicroseconds (10);
  tempo = pulseIn(echo,HIGH);
  dis = (tempo) /val;
  Serial.print(dis);
  Serial.println("cm");
  lcd.setCursor(0,0);
  lcd.print("Llenado");
  G();
}