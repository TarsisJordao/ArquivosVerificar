byte byteRead;

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    byteRead=Serial.read();

       Serial.print(byteRead);
       Serial.println();
  }

}
