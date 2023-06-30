//CHRISTIAN DANIEL MARROQUÍN BARRIOS
//2022132
//PRACTICA #5
//ALARMA ANTI INCENDIOS
#include "Ticker.h"
#include <LedControl.h> //libreria para las led matricial

void impresion(void);

Ticker Interrupcion(impresion, 3000); //Cada 3 segundos realiza una interrupcion
LedControl matriz = LedControl(11,13,10,1);	// crea un objeto

//Comenzamos con la realizacion de todas las figuras
//figura de signo de exclamacion
byte figura[8]{
0x18, 0x18, 0x18, 0x18, 0x18, 0x0, 0x18, 0x18
};
//Figura de la flama
byte figura_1[8]{
0x8, 0x18, 0x24, 0x52, 0xba, 0x6a, 0x6c, 0x38
};
//Letra C
byte figura_2[8]{
0x0, 0x3c, 0x24, 0x20, 0x20, 0x24, 0x3c, 0x0
};
//Letra H
byte figura_3[8]{
0x42, 0x42, 0x42, 0x7e, 0x7e, 0x42, 0x42, 0x42
};
//letra R
byte figura_4[8]{
0x0, 0x7c, 0x44, 0x44, 0x5c, 0x48, 0x44, 0x42
};
//letra I
byte figura_5[8]{
0x0, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x0
};
//Letra S
byte figura_6[8]{
0x0, 0x3c, 0x42, 0x40, 0x3c, 0x2, 0x2, 0x3c
};
//Letra T
byte figura_14[8]{
0x0, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0
};
//Letra I
byte figura_15[8]{
0x0, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x0
};
//Letra A
byte figura_16[8]{
0x0, 0x18, 0x24, 0x42, 0x7e, 0x42, 0x42, 0x42
};
//Letra N
byte figura_17[8]{
0x81, 0xc1, 0xe1, 0xb1, 0x99, 0x8d, 0x87, 0x83
};
//numero 2
byte figura_7[8]{
0x38, 0x44, 0x8, 0x10, 0x20, 0x40, 0x7c, 0x0
};
//numero 0
byte figura_8[8]{
0x3c, 0x42, 0x62, 0x52, 0x4a, 0x46, 0x42, 0x3c
};
//numero 2
byte figura_9[8]{
0x38, 0x44, 0x8, 0x10, 0x20, 0x40, 0x7c, 0x0
};
//numero 2
byte figura_10[8]{
0x38, 0x44, 0x8, 0x10, 0x20, 0x40, 0x7c, 0x0
};
//numero 1
byte figura_11[8]{
0xc, 0x14, 0x4, 0x4, 0x4, 0x4, 0x1f, 0x0
};
//numero 3
byte figura_12[8]{
0x1c, 0x22, 0x2, 0x1e, 0x2, 0x2, 0x22, 0x1c
};
//numero 2
byte figura_13[8]{
0x38, 0x44, 0x8, 0x10, 0x20, 0x40, 0x7c, 0x0
};
//Terminamos el diseño de figuras

//Definimos los pines
int evalua;//nos ayudara a evaluar el valor del sensor 
int buzzer=2;//indica el pin del buzzer
int humo=A1;//indica el pin del sensor 


void setup() {
  Serial.begin(9600);  //Inicio la comunicacion serial	
  matriz.shutdown(0,false);	// enciende la matriz
  matriz.setIntensity(0,4);	// establece el brillo
  matriz.clearDisplay(0);	//limpia la matriz led
  Interrupcion.start();   //Inicializa la libreria y las interrupciones por software
  pinMode(buzzer, OUTPUT); //el pin buzzer se encuentra como salida
  //Imprime todo caracter hecho
  delay(2000);
  diseno_1();
  delay(1000);
  diseno_2();
  delay(1000);
  diseno_3();
  delay(1000);
  diseno_4();
  delay(1000);
  diseno_5();
  delay(1000);
  diseno_6();
  delay(1000);
  diseno_14();
  delay(1000);
  diseno_15();
  delay(1000);
  diseno_16();
  delay(1000);
  diseno_17();
  delay(1000);
  diseno_7();
  delay(1000);
  diseno_8();
  delay(1000);
  diseno_9();
  delay(1000);
  diseno_10();
  delay(1000);
  diseno_11();
  delay(1000);
  diseno_12();
  delay(1000);
  diseno_13();
  delay(1000);
}

void loop() {
  Interrupcion.update(); //Actualiza la libreria para la interrupcion

  evalua = analogRead(humo);
  if(evalua <400){
    digitalWrite(buzzer, HIGH);//enciende el buzzer
    diseno();//hace lo de la funcion
    delay(1000);//tome un descanso
    matriz.clearDisplay(0);	//limpia la matriz led
    diseno_1();
    delay(1000);//tome un descanso
    matriz.clearDisplay(0);	//limpia la matriz led
  }else{
    digitalWrite(buzzer, LOW);//apagamos el buzzer
    delay(10);
    matriz.clearDisplay(0);	//limpia la matriz led
  }

}

//funcion para el signo de exclamacion 
void diseno(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la llama
void diseno_1(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_1[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la   C
void diseno_2(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_2[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la H
void diseno_3(){//se crea la funcion para figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_3[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la R
void diseno_4(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_4[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la I
void diseno_5(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_5[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la S
void diseno_6(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_6[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la T
void diseno_14(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_14[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la I
void diseno_15(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_15[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la A
void diseno_16(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_16[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para la N
void diseno_17(){//se crea la funcion para la figura
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_17[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 2
void diseno_7(){//se crea la funcion para el numero 2
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_7[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 0
void diseno_8(){//se crea la funcion para el numero 0
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_8[i]);	// establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 2
void diseno_9(){//se crea la funcion para el numero 2
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_9[i]);//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 2
void diseno_10(){//se crea la funcion el numero 2
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_10[i]);	// establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 1
void diseno_11(){//se crea la funcion el numero 1
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_11[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 3
void diseno_12(){//se crea la funcion para el numero 3
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++)  //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_12[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//funcion para el numero 2
void diseno_13(){//se crea la funcion para el numero 2
     matriz.clearDisplay(0);
      for (int i = 0; i < 8; i++) //bucle 8 veces por el array
     {
     matriz.setRow(0,i,figura_13[i]);	//establece fila con valor de array cero en misma posicion
     delay(100);
     }
}

//para la ultima interrupcion 
void impresion(void){
 Serial.println(evalua);//se imprime el valor del sensor
}
