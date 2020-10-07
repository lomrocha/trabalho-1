void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int photoResistorValue = analogRead(A0);
  
  (photoResistorValue < 900) ? tone(8, 1000) : noTone(8);
  
  Serial.println(photoResistorValue);
  delay(2000);
}