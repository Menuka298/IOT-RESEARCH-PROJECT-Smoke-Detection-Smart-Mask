void setup()
{
  Serial.begin(9600);
pinMode(A0, INPUT); 
}
void loop()
{
  int oxygensensor = analogRead(A0);
  // print out the value you read:
  Serial.println("ADC : ");
  Serial.println(oxygensensor);
  float Oxygen_Sensor = oxygensensor * 0.28;
  Serial.print(Oxygen_Sensor);
  Serial.println("%");
  delay(300);
}
