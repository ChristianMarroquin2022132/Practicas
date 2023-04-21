#define entrada A0
#define salida 3
#define inpin(pin) pinMode(pin,INPUT)
#define outpin(pin) pinMode(pin,OUTPUT)
#define high(pin) digitalWrite(pin,HIGH)
#define low(pin) digitalWrite(pin,LOW)
int valor_foto;
#define tiempo(pin) delay(500)                                                                                                                                                                      
void setup(){
Serial.begin(9600);
outpin(salida);  
inpin(entrada);  
 }
void loop(){
valor_foto = analogRead(entrada);
Serial.println(valor_foto);

if(valor_foto < 800){
  low(salida);
  }
  else{
    high(salida);
    }
    tiempo();
}
