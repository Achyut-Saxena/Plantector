int mois_sense = A0; // Moisture Sensor input at Analog PIN A0
int out_val ;
void setup() 
{
   pinMode(4,OUTPUT); //attach a buzzer/led to indicate
   Serial.begin(9600);
   Serial.println("Reading From the Sensor ...");
   delay(2000); //to let sensor start
}
void loop() 
{
   out_val = analogRead(mois_sense);
   out_val = map(out_val,550,10,0,100);
   Serial.print("Mositure : ");
   Serial.print(out_val);
   Serial.println("%");
   if(out_val<0)
   {
      digitalWrite(4,HIGH);
   }
   else
   {
      digitalWrite(4,LOW);
   }
   delay(1000);
}
