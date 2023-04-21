#include <Servo.h>

#define Servomotor 3
#define pulsador_1 5
#define pulsador_2 6
#define pulsador_3 7
#define pulsador_4 8
#define pulsador_5 9
#define buzzer 12

Servo servo;

void setup() {
  servo.attach(Servomotor);

  pinMode(pulsador_1, INPUT_PULLUP);
  pinMode(pulsador_2, INPUT_PULLUP);
  pinMode(pulsador_3, INPUT_PULLUP);
  pinMode(pulsador_4, INPUT_PULLUP);
  pinMode(pulsador_5, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(pulsador_1) == LOW) {
    servo.write(0);
    tone(buzzer,1520.65);
  } else if (digitalRead(pulsador_2) == LOW) {
    servo.write(180);
  } else if (digitalRead(pulsador_3) == LOW) {
    servo.write(135);
  } else if (digitalRead(pulsador_4) == LOW) {
    servo.write(90);
  } else if (digitalRead(pulsador_5) == LOW) {
    servo.write(45);
  }
  delay(100);
  noTone(buzzer);
}
