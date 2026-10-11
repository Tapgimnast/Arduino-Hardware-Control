#include <Servo.h>

int xPin = A1;
int xVal;
int sPin = 10;
int sVal;
int yPin = A2;
int yVal;
int xServoPin = 12;
Servo xServo;
int yServoPin = 11;
Servo yServo;
int dt = 200;
int buzzPin=9;
int xPos;
int yPos;

void setup()
{
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
  xServo.attach(xServoPin);
  yServo.attach(yServoPin);
  pinMode(buzzPin, OUTPUT);
}

void loop()
{
  
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  
  while(digitalRead(sPin) == 0)
  {
    digitalWrite(buzzPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(buzzPin, LOW);
    delayMicroseconds(1000);
  }
  
  xPos = (180./1023.)*xVal;
  yPos = (180./1023.)*yVal;
  
  Serial.print("x: "); Serial.print(xPos);
  Serial.print(" y: "); Serial.print(yPos);
  Serial.print(" s: "); Serial.println(sVal);
  delay(dt);
  
  xServo.write(xPos);
  yServo.write(yPos);
  
}