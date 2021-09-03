const int analogInPin = A5;

int sensorValue = 0;
int outputValue = 0;
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  if (outputValue> 100)
  {
    //add a buzzer/led to pin 8 
    tone(8, 1400, 500);
      delay(200);
      tone(8, 800, 200);
      delay(200);
      tone(8, 1800, 500);
      delay(200);
      tone(8, 600, 200);
      delay(200);
  }
    delay(1000);
}
