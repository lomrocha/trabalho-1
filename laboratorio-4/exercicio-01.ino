void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int photoResistorValue = analogRead(0);
  if (photoResistorValue > 900)
  {
    tone(8, 1000);
  }
  else
  {
    noTone(8);
  }
  
  Serial.println(photoResistorValue);
  delay(1000);
}