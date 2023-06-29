// Christian Marroquín
#include <LedControl.h> //libreria para las led matricial
#include <Adafruit_NeoPixel.h>//libreria para la rueda led
#include <Servo.h>//libreria para el servo motor
#include <SoftwareSerial.h>//para el bluetooth

SoftwareSerial Bluetooth(8, 9);
Adafruit_NeoPixel tled = Adafruit_NeoPixel(7,12);
LedControl matricial = LedControl(11,13,10,1);	// crea objeto
byte numero_1[8] = {		//Muestra el numero 1	
  0x38, 0x64, 0x96, 0x65, 0x25, 0x26, 0x3c, 0x0
};
byte numero_2[8] = { //Muestra numero 2
  0x60, 0x60, 0x60, 0x60, 0x60, 0x7c, 0x7c, 0x0
};
byte numero_3[8] = { //Muestra numero 3
  0x0, 0x7e, 0x4, 0x8, 0x10, 0x20, 0x40, 0x0
};
//Variables (inicio)
char boton = 0;
int diodo_1=2;
int diodo_2=3;
int diodo_3=4;
int diodo_4=5;
bool etd = 0;
bool etd_1=0;
bool etd_2=0;
bool etd_3=0;
int val;
Servo dota;
//Variables(final)
void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);
  pinMode(diodo_1,OUTPUT); //Los modos de los pines
  pinMode(diodo_2,OUTPUT);
  pinMode(diodo_3,OUTPUT);
  pinMode(diodo_4,OUTPUT);
  tled.begin();
  tled.show();
  matricial.shutdown(0,false);	//Prende la matriz
  matricial.setIntensity(0,4);//Cantidad del brillo
  matricial.clearDisplay(0);	
  dota.attach(6)
}
//se crean los estados de todos los led (diodos)
void loop() { 
  if (Bluetooth.available() > 0){
    boton = Bluetooth.read();
    Serial.println(boton);
    if(boton == 'A')
      etd=!etd;
    digitalWrite(diodo_1,etd);


    if(boton == 'B')
      etd_1=!etd_1;
    digitalWrite(diodo_2, etd_1);


    if(boton == 'C')
      etd_2=!etd_2;
    digitalWrite(diodo_3, etd_2);

    if(boton == 'D')
      etd_3=!etd_3;
    digitalWrite(diodo_4, etd_3);

    if(boton == 'E')
      Diseno_1();
    if(boton == 'F')
      Diseno_2();
    if(boton == 'G')
      Diseno_3();
    if(boton == 'H'){
      for(int i = 0; i<7; i = i+2 ){
        tled.setBrightness(100);//este es el maximo de la tira 
        tled.setPixelColor(i, 150,55,0);
        tled.show();
        delay(100);
      }
    }
  }
}

void Diseno_1(){
  for (int i = 0; i < 8; i++) // crea el bucle por array 8 veces
  {
    matricial.setRow(0,i,numero_1[i]);	//crea la fila con array
    delay(100);
  }
}

void Diseno_2(){ //figura 2
  matricial.clearDisplay(0);
  for (int i = 0; i < 8; i++)//Se crea el bulce 8 veces por array
  {
    matricial.setRow(0,i,numero_2[i]);//crea la fila con el array
    delay(100);
  }
}

void Diseno_3(){ //figura 3
  for (int i = 0; i < 8; i++)//se crea bucle 8 veces por array
  {
    matricial.setRow(0,i,numero_3[i]);//crea la fila con el array
    delay(100);
  }
}

void servo(){ //establecemos el servomotor
  while ( Bluetooth.available() > 0){
    val = Bluetooth.read();
    Serial.println(val);
    dota.write(val);
  }
}
