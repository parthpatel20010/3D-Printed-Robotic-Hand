
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int servoPin1 = 9;
int servoPin2 = 5;
int servoPin3 = 6; 
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
  servo1.attach(flexPin1);
  servo2.attach(flexPin2);
  servo3.attach(flexPin3);
  servo4.attach(flexPin4);
  Serial.begin(9600);

}

void loop() {
  servo1.write(map(analogRead(flexPin1), 630, 320, 170, 0));
  delay(50);
  servo2.write(map(analogRead(flexPin2), 630, 320, 170, 0));
  delay(50);
  servo3.write(map(analogRead(flexPin3), 630, 320, 170, 0));
  delay(50);
  servo4.write(map(analogRead(flexPin4), 145, 80, 145, 5));
  delay(50);
  Serial.println(analogRead(flexPin3));
}


