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
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() 
{
  tiltVal = digitalRead(tiltPin);

  if(tiltVal == 0)
  {
    if(Serial.available() > 0)
    {
      motorSpeed = Serial.parseInt();
      Serial.print("Noua viteza: ");
      Serial.println(motorSpeed);
    }
      analogWrite(speedPin, motorSpeed);
      digitalWrite(dir2, HIGH);
      digitalWrite(dir1, LOW);
   
  }
  else
  {
    analogWrite(speedPin, 0);
  }
}
