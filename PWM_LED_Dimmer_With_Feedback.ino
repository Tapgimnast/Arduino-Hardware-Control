int buttonHighPin=11;
int buttonLowPin=10;
int LEDPin=6;
int buttonHighRead;
int buttonLowRead;
int LEDPower=0;
int dt=250;
int buzzPin=7;

void setup()
{
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonHighPin,INPUT);
  pinMode(buttonLowPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonHighRead=digitalRead(buttonHighPin);
  buttonLowRead=digitalRead(buttonLowPin);
  
  digitalWrite(buzzPin,LOW)
    ;
  if(LEDPower < 255 && buttonHighRead==0)
    LEDPower+=5;
 
  if(LEDPower > 0 && buttonLowRead==0)
    LEDPower-=5;
  
  if(LEDPower == 255 && buttonHighRead == 0)
     digitalWrite(buzzPin,HIGH);
  
  if(LEDPower == 0 && buttonLowRead == 0)
     digitalWrite(buzzPin,HIGH);
  
  
  Serial.println(LEDPower);
  
  analogWrite(LEDPin, LEDPower);
    
  
  delay(dt);
}