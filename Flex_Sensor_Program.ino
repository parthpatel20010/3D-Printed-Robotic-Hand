
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int servoPin1 = 5;
int servoPin2 = 6;
int servoPin3 = 9; 
int servoPin4 = 3; 
int flexPin1 = 5; 
int flexPin2 = 4; 
int flexPin3 = 3; 
int flexPin4 = 2;
void setup() {
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  Serial.begin(9600);

}

void loop() {
  servo1.write(map(analogRead(flexPin1), 380, 170, 140, 0));
  delay(50);
  servo2.write(map(analogRead(flexPin2), 500, 300, 170, 0));
  delay(50);
  servo3.write(map(analogRead(flexPin3), 430, 220, 170, 0));
  delay(50);
  servo4.write(map(analogRead(flexPin4), 120, 80, 145, 5));
  delay(50);
  Serial.println(analogRead(flexPin4));
}


