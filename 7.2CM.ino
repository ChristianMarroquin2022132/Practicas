	//Christian Daniel Marroquín Barrios - 2022132
  //Practica 7.2
#include <SPI.h>			//libreria bus SPI
#include <MFRC522.h>			//libreria especifica para MFRC522
#include <Servo.h>//Librerias
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int Rojo = 2;
int Verde = 3;
const int servoPin1 = 5;
int buz = 4;
Servo servo;
#define RST_PIN  9			//referencia pin de reset
#define SS_PIN  10			//referencia pin de slave select

MFRC522 mfrc522(SS_PIN, RST_PIN);	// crea slave select y reset
LiquidCrystal_I2C lcd(0x27, 16, 2);// Inicializa la pantalla LCD

byte LecturaUID[4]; 				// crea array para almacenar el UID leido
byte Usuario1[4]= {0xB2, 0x054, 0x9E, 0x1C} ;    // UID de tarjeta 1
byte Usuario2[4]= {0xE3, 0x0D4, 0x95, 0xA5} ;    // UID de llavero 1

void setup() {
  Serial.begin(9600);			// inicializa comunicacion por monitor 
  SPI.begin();				// inicializa bus SPI
  mfrc522.PCD_Init();			// inicializa modulo lector
  Serial.println("Listo");		// Muestra texto Listo
  servo.attach(servoPin1);
  servo.write(0);
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(buz, OUTPUT);

   Wire.begin();// Inicializa la comunicación I2C
  lcd.backlight();// Encender luminación de la LCD

  lcd.begin(16, 2);
  lcd.print("Ingresa la tarjeta");//Imprime el texto 

}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent())		// si no hay una tarjeta 
    return;						// retorna esperando por una tarjeta
  
  if ( ! mfrc522.PICC_ReadCardSerial()) 		// no puede obtener datos de la tarjeta
    return;						// retorna esperando por otra tarjeta
    
    Serial.print("UID:");				// muestra texto UID:
    for (byte i = 0; i < mfrc522.uid.size; i++) {	
      if (mfrc522.uid.uidByte[i] < 0x10){		
        Serial.print(" 0");				// imprime espacio en blanco y numero cero
        }
        else{						
          Serial.print(" ");				// imprime un espacio en blanco
          }
          Serial.print(mfrc522.uid.uidByte[i], HEX);   	// imprime el byte del UID leido 
          LecturaUID[i]=mfrc522.uid.uidByte[i];   	// almacena en array el byte      
          }
          
          Serial.print("\t");   			// imprime un espacio de tabulacion             
                    
          if(comparaUID(LecturaUID, Usuario1)){//llama a funcion con Usuario1
            lcd.clear();
            Serial.println("Bienvenido");	// si retorna verdadero muestra texto bienvenida
            servo.write(90);
            delay(20);
            lcd.print("Hola Desconocido");
            tone(buz, 445, 2000);

            digitalWrite(Verde, HIGH);
            digitalWrite(Rojo, LOW);
            delay(2000);
            digitalWrite(Verde, LOW);
            digitalWrite(Rojo, HIGH);
            lcd.clear();
            lcd.print("Inserte la tarjeta");//Imprime el texto en la LCD
            servo.write(0);
          }
          else if(comparaUID(LecturaUID, Usuario2)){// llama a funcion con Usuario2
            lcd.clear();
            Serial.println("Bienvenido Marroquín");	// si retorna verdadero muestra texto bienvenida
            servo.write(90);
            delay(20);
            lcd.print("Hola Marroquín");
            tone(buz, 445, 2000);
            digitalWrite(Verde, HIGH);
            digitalWrite(Rojo, LOW);
            delay(2000);
            digitalWrite(Verde, LOW);
            digitalWrite(Rojo, HIGH);
            lcd.clear();
            lcd.print("Inserte la tarjeta");//Imprime el texto en la LCD
            servo.write(0);
          }	 
          else{					
            Serial.println("Usueario falso");	// muestra texto a acceso denegado          
            lcd.clear(); 
            servo.write(0);
            lcd.print("no registrado");
            digitalWrite(Rojo, HIGH);   
            delay(2000);
            lcd.clear();
            lcd.print("Inserte la tarjeta");//Imprime el texto en la LCD
          }
                  mfrc522.PICC_HaltA();  		// detiene comunicacion con tarjeta                
}

boolean comparaUID(byte lectura[],byte usuario[])	// funcion comparaUID
{
  for (byte i=0; i < mfrc522.uid.size; i++){		// bucle recorre de a un byte por vez 
  if(lectura[i] != usuario[i])				
    return(false);				
  }
  return(true);					
}