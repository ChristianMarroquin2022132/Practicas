#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DallasTemperature.h>
#include <RTClib.h>

#define lcdAddress 0x27  
#define filas 2
#define columnas 16
LiquidCrystal_I2C pantallalcd(lcdAddress, columnas, filas);

OneWire ourWire(4);
DallasTemperature sensors(&ourWire);

RTC_DS3231 rtc;

#define buz 2
#define salidabuz() pinMode(buz,OUTPUT)
#define encendidobuz() tone(buz,1000)
#define apagadobuz() noTone(buz)

#define mini 5
#define salidamini() pinMode(mini,OUTPUT)
#define encendermini() digitalWrite(mini,HIGH)
#define apagarmini() digitalWrite(mini,LOW)

void setup() {
  pantallalcd.init();
  pantallalcd.backlight();
  sensors.begin();
  rtc.begin();
  rtc.adjust(DateTime(__DATE__, __TIME__));
  salidabuz();
  salidamini();

}

void loop() {
  sensors.requestTemperatures();
  float temperatura = sensors.getTempFByIndex(0);
  pantallalcd.setCursor(0,0);  
  pantallalcd.print(temperatura);
  pantallalcd.print("T ");
  
  DateTime fecha = rtc.now();
  pantallalcd.print(  fecha.hour());
  pantallalcd.print(":");				
  pantallalcd.print(fecha.minute());
  pantallalcd.print(":");
  pantallalcd.print(fecha.second());
  
  delay(100);

  if (fecha.hour() == 24 && fecha.minute() == 26 && fecha.second() == 0){    
    encendidobuz();
    pantallalcd.setCursor(0,1);
    pantallalcd.print("Regar hasta 5 Segundos");
    delay(5000);
    pantallalcd.clear();
    
  } 
  if (fecha.hour() == 24 && fecha.minute() == 26 && fecha.second() == 5) {
  apagadobuz();
  pantallalcd.setCursor(0,1);
  pantallalcd.print("Regar");
  apagarmini();
  delay(20000);
  pantallalcd.clear();
  } else{
    encendermini();
  }
}