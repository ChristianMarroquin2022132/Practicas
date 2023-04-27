#include <Adafruit_NeoPixel.h> //Ibcluimos la libreria
#include <Keypad.h> //agregamos el keypad
#include <Servo.h> //agragamos el servomotor
#define tiempo() delay(1500)
#define FILAS 4 //definimos filas 
#define COLUMNAS 4 //definimos columnas
Adafruit_NeoPixel tira = Adafruit_NeoPixel(7,2);
char keys[FILAS][COLUMNAS] = { //colocamos el keypad
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
char key;
byte Filas[FILAS]={9,10,11,12}; //los pines de filas
byte Columnas[COLUMNAS] = {13,A0,A1,A2}; //los pines de columnas
Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS); //el código del keypad
Servo servo;
void setup() {
  Serial.begin(9600);
  tira.begin();
  tira.show();
  servo.attach(4);
}
void loop() {
  key = teclado.getKey(); //agregamos el teclado
  if(key){
  Serial.println(key);
  }else{
    tira.clear();
  }
  switch(key){
    case '0':
      servo.write(0);
      tiempo();
    break;

    case '1': //definimos los numeros para el servomotor
      servo.write(20);
      tiempo();
    break;

    case '2':
      servo.write(40);
      tiempo();
    break;

    case '3':
      servo.write(60);
      tiempo();
    break;

    case '4':
      servo.write(80);
      tiempo();
    break;

    case '5':
      servo.write(100);
      tiempo();
    break;

    case '6':
      servo.write(120);
      tiempo();
    break;

    case '7':
      servo.write(140);
      tiempo();
    break;

    case '8':
      servo.write(160);
      tiempo();
    break;

    case '9':
      servo.write(180);
      tiempo();
    break;

    case 'A': //definimos las letras para el led
      for(int i = 0; i<7; i = i+2 ){
        tira.setBrightness(100);
        tira.setPixelColor(i, 90,43,5);
       tira.show();
        delay(100);
      }
    break;

    case 'B':
      for(int i = 0; i<7; i++) {
        tira.setBrightness(100);
        tira.setPixelColor(i, 100,128,43);
        tira.show();
       delay(100);
     }
    break;

    case 'C':
     for(int i = 7; i>=-1; i = i-2) {
       tira.setBrightness(100);
        tira.setPixelColor(i, 128, 5, 5);
       tira.show();
       delay(100);
     } 
    break;

    case 'D':
      for(int i = 0; i<7; i++) {
       tira.setBrightness(100);
        tira.setPixelColor(i, 5, 240, 128);
        tira.show();
       delay(100);
     }
    break;

    case '*' :
      for(int i=0;i<7 ;i++){
          tira.setBrightness(100);
          tira.setPixelColor(i, 128, 128, 128);
          tira.show();
          delay(100);
      }
    break;

    case '#':
      for(int i = 0; i<7; i = i+2 ){
       tira.setBrightness(100);
       tira.setPixelColor(i, 230,250,5);
       tira.show();
        delay(100);
      }
    break;
}

} //terminamos código
