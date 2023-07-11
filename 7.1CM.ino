	//Christian Daniel Marroquín Barrios - 2022132
  //Practica 7.1
#include <Wire.h>//se llama la libreria Wire 
#include <LiquidCrystal_I2C.h>//se instala la libreria LiquidCrystal_I2C 

#define lcdAddress 0x27  //se indica toma el modulo i2c
#define filas 2//se indica que numero de filas 
#define columnas 16//se indica el numero de columnas que tiene el lcd 
LiquidCrystal_I2C pantallalcd(lcdAddress, columnas, filas);//se llama la libreria LiquidCrystal_I2C 

const float Dato1 = 0.185; //DATO de Medicion para lectura de -5A a 5A
const float Dato2 = 0.1; //DATO de Medicion para lectura de -20A a 20A
const float Dato3 = 0.066; //DATO de Medicion para lectura de -30A a 30A
int Lectura = 0; // Lectura del pin A 7ds l0
double Corriente = 0; //Guarda el valor de la corriente leida 
float voltajes = 0; //guarda los valores de 0 a 5 

const float Dato = 1.25; // Constante del DATO de Lectura
int lectura_1 = 0; //Guardar La lectura hecha por el sensor

int pulsador1 = 2;
int pulsador2 = 3;
int valor1 =0;
int valor2 =0; 

void setup() {
  Serial.begin(9600); //Inicializa la comunicacion Serial
  pantallalcd.init();//se indica que la pantallalcd que en eso se inicia
 pantallalcd.backlight();//se indica que la pantallalcd 
 pinMode(pulsador1, OUTPUT);
 pinMode(pulsador2, OUTPUT);
  pantallalcd.clear();
  pantallalcd.setCursor(0,0);//POSICIÓN DE LA LCD 
  pantallalcd.print("   Medidas  ");//imprime corriente:
  pantallalcd.setCursor(0,1);//POSICIÓN DE LA LCD 
  pantallalcd.print("I:pulsador1  ");//imprime corriente:
  pantallalcd.print("V:pulsador2");//imprime voltaje:
 attachInterrupt(digitalPinToInterrupt(pulsador1),pul1,CHANGE);//INTERUPCIÓN
 attachInterrupt(digitalPinToInterrupt(pulsador2),pul2,CHANGE);//INTERUPCIÓN
}

void loop() {
  if(valor1 == 250){
    valor2 = 0;
    corriente();
  } 
  if(valor2 == 150){
    valor1 = 0;
    voltaje();
  }
}

void corriente(){
  Lectura = analogRead(A0); //Leer el pin analogico
  voltajes = (Lectura*5.0) / 1023.0; //lectura del sensor   
  Corriente = (voltajes - 2.5)/Dato3; //obtiene la corriente
  pantallalcd.clear();//limpia la pantalla lcd
  pantallalcd.setCursor(0,0);//POSICIÓN DE LA LCD 
  pantallalcd.print("Corriente: ");//imprime corriente:
  pantallalcd.setCursor(0,1);//POSICION DE LA LCD
  pantallalcd.print(Corriente,3);//imprime el valor de la corriente 
  pantallalcd.print("A");//imprime el valor de corriemte 
  delay(200);
}
void voltaje(){
  lectura_1 = analogRead(A1); //Para hacer la lectura del pin A0
  float voltaje =  (5*lectura_1*Dato)/1023; // Conversion de lectura analogica a valores de medicion
  pantallalcd.clear();//limpia la pantalla lcd
  pantallalcd.setCursor(0,0);//POSICIÓN DE LA LCD 
  pantallalcd.print("Voltaje: ");//imprime el voltaje
  pantallalcd.setCursor(0,1);//POSICION DE LA LCD
  pantallalcd.print(voltaje);//imprime el valor del voltaje
  pantallalcd.print("V");//imprime el valor del voltaje 
  delay(200);
  Serial.println(voltaje);
}
void pul1(){
  valor1 = 250;
}
void pul2(){
  valor2 = 150;
}

