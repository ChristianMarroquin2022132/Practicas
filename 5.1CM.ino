#include <Keypad.h> //se muestra la libreria keypad.h
#define FILAS 4 //definimos las filas
#define COLUMNAS 4 //definimos las columnas
#define a 3 //empiezan las variables
#define b 2
#define c 6
#define d 7
#define e 8
#define f 4
#define g 5 //terminan las varibales 
#define salida(pin)pinMode(pin,OUTPUT) //definimos la funcion de pines
#define off(pin)digitalWrite(pin,LOW)
#define on(pin)digitalWrite(pin,HIGH)


char keys[FILAS][COLUMNAS] = { //colocamos los pines de keypad
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={9,10,11,12}; //definimos los pines del keypad
byte Columnas[COLUMNAS] = {13,A0,A1,A2};

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS); //colocamos el código del keypad


void setup()
{
 Serial.begin(9600);//definimos las salidas
 salida(3); 
 salida(2);
 salida(6);
 salida(7);
 salida(8);
 salida(4);
 salida(5);
}

void loop(){
  key = teclado.getKey();
  
  if(key){
  }

  switch(key){ //comenzamos a definir cada case con su pin del display
  case '1':
  off(3);
  on(2);
  on(6);
  off(7);
  off(8);
  off(4);
  off(5);
  delay(10);
   break;
  
   
  case '2':
    on(3);
   on(2);
   off(6);
   on(7);
   on(8);
   off(4);
   on(5);
   break;
   
  
  case '3':
   on(3);
   on(2);
   on(6);
   on(7);
   off(8);
   off(4);
   on(5);
    break;
    
  case '4':
   off(3);
   on(2);
   on(6);
   off(7);
   off(8);
   on(4);
   on(5);
    break;
  
  case '5':
   on(3);
   off(2);
   on(6);
   on(7);
   off(8);
   on(4);
   on(5);
    break;
    

  case '6':
   on(3);
   off(2);
   on(6);
   on(7);
   on(8);
   on(4);
   on(5);
    break;
    
  case '7':
   on(3);
   on(2);
   on(6);
   off(7);
   off(8);
   off(4);
   off(5);
    break;
    
  case '8':
   on(3);
   on(2);
   on(6);
   on(7);
   on(8);
   on(4);
   on(5);
    break;
  
  case '9':
   on(3);
   on(2);
   on(6);
   on(7);
   off(8);
   on(4);
   on(5);
 
    break;
    

  case '0':
   on(3);
   on(2);
   on(6);
   on(7);
   on(8);
   on(4);
   off(5);
    break;
    

    case 'A':
    on(3);
   on(2);
   on(6);
   off(7);
   on(8);
   on(4);
   on(5);
    break;
    

    case 'B':
   off(3);
   off(2);
   on(6);
   on(7);
   on(8);
   on(4);
   on(5);
    break;
     

    case 'C':
   on(3);
   off(2);
   off(6);
   on(7);
   on(8);
   on(4);
   off(5);
    break;
     

    case 'D':
   off(3);
   on(2);
   on(6);
   on(7);
   on(8);
   off(4);
   on(5);
    break;
     

    case '*':
   on(3);
   off(2);
   off(6);
   off(7);
   on(8);
   on(4);
   on(5);
    break;
     

    case '#':
   on(3);
   off(2);
   off(6);
   on(7);
   on(8);
   on(4);
   on(5);
    break; //terminamos de definir todos los case con dsiplay


  }
}//cerramos el código