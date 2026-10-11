int yPin = A1;
int yVal;
int speedPin = 3;
int motorSpeed;
int dir1 = 4;
int dir2 = 5;

void setup() 
{
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(yPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  yVal = analogRead(yPin);
  Serial.println(yVal);
  delay(250);

  if(yVal > 500 && yVal < 540)
  {
    analogWrite(speedPin, 0);
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, LOW);
  }

  else if(yVal < 500)
  {
    motorSpeed = (-55./500.)*yVal + 255;
    analogWrite(speedPin, motorSpeed);
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
  }

  else
  {
    motorSpeed = (55./483.)*yVal - (55./483.)*540 + 200;
    analogWrite(speedPin, motorSpeed);
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
  }
}
