#include <Keypad.h> //incluimos la libreria
const int FILAS = 4; //definimos filas
const int COLUMNAS= 4; //definimos columnas
const int buz=3; //creamos variable para el buzzer
const int radar = 2; //creamos la variable para el sensor
int lee;
char keys[FILAS][COLUMNAS]={ //colocamos el keypad
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pinesFila[FILAS]={9,10,11,12}; //definimos pines de las filas
byte pinesColumna[COLUMNAS]={13,A0,A1,A2}; //definimos pines de columnas
Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);
char teclaPrecionada;

char pass[8]="2022132"; //colocar la contraseña
char ingresaPass[8]; // tun numero mas en el renglon para registrar la contraseña
int indice=0;
#define salida(pin) pinMode(pin,OUTPUT);
#define entrada(pin) pinMode(pin,INPUT);
#define encender_b(pin) tone(pin,100);   
#define apagar_b(pin) noTone(pin);
void setup()
{
  Serial.begin(9600);
  entrada(radar);
  salida(buz);
  encender_b(buz);
  apagar_b(buz);
}

void loop(){
  teclaPrecionada=teclado.getKey(); //detecta que en el teclado se pulso un boton
  if(teclaPrecionada){
    ingresaPass[indice]=teclaPrecionada; // le asigna lo que ingresamos a el arreglo que va a ser comparado
    indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
  }
   lee=digitalRead(radar);
  if (lee == 1)
  {
    encender_b(buz);
  }

  if(indice==7){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
    if(strcmp(pass,ingresaPass)==0){ //Verifica que la contraseña esta correcta
      apagar_b(buz);
    }
    indice=0;
  }
}
