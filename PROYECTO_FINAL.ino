#include <Wire.h>//se llama la libreria Wire que nos ayudara a comunicarnos con el dispositivos de I2C
#include <LiquidCrystal_I2C.h>//se instala la libreria LiquidCrystal_I2C para trabajar con el i2c del lcd junto con el MÃ³dulo serial I2C
#include <SoftwareSerial.h>//para el bluetoo
#include <RTClib.h>//se instala y llama la libreria RTClib para poder utilizar el modulo RTC


SoftwareSerial miBT(8, 9);//se indica el tx rxt de los pines que van y tambien el nombre del bluetooo

#define lcdAddress 0x27  //se indica la direcciÃ³n que toma el modulo i2c
#define filas 2//se indica que numero de filas que tiene el lcd que son dos para despues utilizarlo
#define columnas 16//se indica el numero de columnas que tiene el lcd que son 16 
LiquidCrystal_I2C pantallalcd(lcdAddress, columnas, filas);//se llama la libreria LiquidCrystal_I2C se le indica el nombre de pantallalcd se le indica la direcciÃ³n del lcd,la variable columnas y filas

int m1a = 10;            //Motor 1, pin 10 del arduino va al pin 15 del L293B.
int m1b = 9;             //Motor 1, pin 9 del arduino va al pin 10 del L293B.
int m2a = 12;            //Motor 2, pin 12 DEL arduino va al pin 2 del L293B.
int m2b = 11;            //Motor 2, pin 11 del arduino va al pin 7 del L293B.
char val;
RTC_DS3231 THC;//crea objeto del tipo RTC_DS3231


void setup() 
{  
pantallalcd.init();//se indica que la pantallalcd que en eso se iniciara
pantallalcd.backlight();//se indica que la pantallalcd para su iluminaciÃ³n
miBT.begin(9600);//se inicializa el bluetoo
THC.begin();//se inicializa el THC
THC.adjust(DateTime(__DATE__, __TIME__));//funcion que permite establecer fecha y horario 
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 9 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 11 set as output Pin
Serial.begin(9600);
}

void loop()
{
  pantallalcd.setCursor(0,0);
  pantallalcd.print("FM          17.5");
  horario();


  while (miBT.available() > 0)
  {
  val = miBT.read();
  Serial.println(val);
  }

  if( val == 'F')                   // Hacia adelante
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);  
    }
  else if(val == 'B')              // Hacia atras
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH); 
    }
  
    else if(val == 'L')             // Izquierda 
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
    else if(val == 'R')              //Derecha
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
      else if(val == 'S')               //Stop - Pare, Carrito detenido
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    } 
     else if(val == 2)
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
}
void horario(){
  DateTime fecha = THC.now();//funcion que devuelve fecha y horario en formato
  pantallalcd.setCursor(0,1);
  pantallalcd.print(  fecha.hour());//funcion que obtiene la hora de la fecha completa
  pantallalcd.print(":");//caracter dos puntos como separador
  pantallalcd.print(fecha.minute());//funcion que obtiene los minutos de la fecha completa
  pantallalcd.print(":");//caracter dos puntos como separador
}