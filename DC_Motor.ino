int speedPin = 9;
int tiltPin = 10;
int tiltVal;
int dir1 = 11;
int dir2 = 12;
int motorSpeed;

void setup() 
{
  Serial.begin(9600);
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() 
{
  tiltVal = digitalRead(tiltPin);

  if(tiltVal == 0)
  {
    Serial.print("Ce viteza vrei sa aibe morisca :");
    while(!Serial.available()) {}
    motorSpeed = Serial.parseInt();
    Serial.println(motorSpeed);
    while(digitalRead(tiltPin) == 0)
    {
      analogWrite(speedPin, motorSpeed);
    digitalWrite(dir2, HIGH);
    }
  }
  else
  {
    analogWrite(speedPin, 0);
  }
}
