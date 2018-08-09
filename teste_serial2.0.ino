char charRead;

void setup() 
{
  Serial.begin(115200);
}

void inicio()
{
  Serial.println("TESTE DE COMANDOS NA SERIAL");
  Serial.println();
}

void loop() 
{
  while(Serial.available() > 0)
  {
    charRead=Serial.read();

       Serial.println(charRead);
  
    switch(charRead)
    {
      case '1':
      {
        Serial.println("GPIO4");
        Serial.println();
        break;
      }
      
      case '2':
      {
        Serial.println("GPIO5");
        Serial.println();
        break;
      }
      
      case '3':
      {
        Serial.println("GPIO12");
        Serial.println();
        break;
      }
      
      case '4':
      {
        Serial.println("GPIO13");
        Serial.println();
        break;
      }

      default:
      {
        Serial.println("Opcao invalida");
        Serial.println();
      }
    }
  }
}
