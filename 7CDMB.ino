//Christian Daniel Marroquín Barrios
//Practica 7
//2022132
//EB5BM
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <RTClib.h>
#include <Servo.h>

const int FILAS = 4;
const int COLUMNAS = 4;
int lee;
char keys[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pinesFila[FILAS] = {2,3,4,5};
byte pinesColumna[COLUMNAS] = {6,7,8,9};
Keypad teclado = Keypad(makeKeymap(keys), pinesFila, pinesColumna, FILAS, COLUMNAS);
char teclaPrecionada;
char pass[6] = "20220";
char ingresaPass[6];
int indice = 0;
#define lcdAddress 0x27  
#define filas 2
#define columnas 16

LiquidCrystal_I2C pantallalcd(lcdAddress, columnas, filas);
Servo servom;
RTC_DS3231 THC;

void setup() {
  pantallalcd.init();
  pantallalcd.backlight();
  THC.begin();
  THC.adjust(DateTime(__DATE__, __TIME__));
  servom.attach(12);
  pantallalcd.clear();
}

void loop() {
  // Mostrar la hora en la pantalla LCD
  pantallalcd.setCursor(8, 0);
  DateTime fecha = THC.now();
  pantallalcd.print(fecha.hour());
  pantallalcd.print(":");
  pantallalcd.print(fecha.minute());
  pantallalcd.print(":");
  pantallalcd.print(fecha.second());
  pantallalcd.setCursor(0, 0);
  pantallalcd.print("CLOSE");
  delay(100);

  // Leer el teclado
  teclaPrecionada = teclado.getKey();

  // Mostrar la contraseña ingresada en la pantalla LCD
  pantallalcd.setCursor(0, 1);
  pantallalcd.print("PIN:");
  if (teclaPrecionada) {
    ingresaPass[indice] = teclaPrecionada;
    indice++;
    pantallalcd.setCursor(7, 1);
    pantallalcd.print(ingresaPass);
  }

  // Verificar la contraseña ingresada y abrir o cerrar la puerta
  if (indice == 5) {
    if (strcmp(pass, ingresaPass) == 0) {
      pantallalcd.setCursor(0, 1);
      pantallalcd.print("ABRE LA PUERTA");
      delay(1000);
      pantallalcd.clear();
      servom.write(360);//mueve el servomotor 360°
      delay(1000);
      pantallalcd.setCursor(1, 1);
      pantallalcd.print("WELCOME");
      delay(2000);
      pantallalcd.clear();
      pantallalcd.setCursor(1, 1);
      pantallalcd.print("CIERRA EN 3");
      delay(3000);
      pantallalcd.clear();
      servom.write(0);
      delay(1000);
      pantallalcd.setCursor(1, 1);
      pantallalcd.print("CERRADA PUERTA");
      delay(1000);
      pantallalcd.setCursor(1, 1);
      pantallalcd.print("CLOSE");
      pantallalcd.clear();           
    } 
    //deniega la puerta con la contraseña incorrecta
    else{
      pantallalcd.clear();
      pantallalcd.setCursor(0,1);
      pantallalcd.print("ACCESO DENEGADO");
      delay(2000);
      pantallalcd.clear();
    }indice=0;
    
  }
  
}
