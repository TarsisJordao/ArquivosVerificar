//Sketch para teste de entradas digitais do ESP8266-07

#define GPIO4   4
#define GPIO5   5
#define GPIO12 12
#define GPIO13 13
#define GPIO15 15
#define GPIO16 16


void setup() 
{
  Serial.begin(115200);

  Serial.println("Teste de Entradas Digitais");
  Serial.println();
  
  pinMode(GPIO4,INPUT);
  pinMode(GPIO5,INPUT);
  pinMode(GPIO12,INPUT);
  pinMode(GPIO13,INPUT);
  pinMode(GPIO15,INPUT);
  pinMode(GPIO16,INPUT);  
}

void loop() 
{
 int teste=0;
 
    teste=Serial.read();
    
    if(teste==1)
{ 
   Serial.println("Acione a entrada digital correspondente ao GPIO4");
   delay(3000);
    
   if(digitalRead(GPIO4)==0)
   {
     Serial.println("A entrada digital esta funcionando");
     Serial.println();
   }
  
    else
    {
      Serial.println("A entrada digital nao foi acionada");
      Serial.println();
    }
} 
// TESTE DO GPIO5

  Serial.println("Acione a entrada digital correspondente ao GPIO5");
  delay(3000);
  
  if(digitalRead(GPIO5)==0)
  {
    Serial.println("A entrada digital esta funcionando");
    Serial.println();
  }
  
  else
  {
    Serial.println("A entrada digital nao foi acionada");
    Serial.println();
  }

// TESTE DO GPIO12

  Serial.println("Acione a entrada digital correspondente ao GPIO12");
  delay(3000);
  
  if(digitalRead(GPIO12)==0)
  {
    Serial.println("A entrada digital esta funcionando");
    Serial.println();
  }

  else
  {
    Serial.println("A entrada digital nao foi acionada");
    Serial.println();
  }

// TESTE DO GPIO13

  Serial.println("Acione a entrada digital correspondente ao GPIO13");
  delay(3000);
  
  if(digitalRead(GPIO13)==0)
  {
    Serial.println("A entrada digital esta funcionando");
    Serial.println();
  }

  else
  {
    Serial.println("A entrada digital nao foi acionada");
    Serial.println();
  }

// TESTE DO GPIO15

  Serial.println("Acione a entrada digital correspondente ao GPIO15");
  delay(3000); 
   
  if(digitalRead(GPIO15)==0)
  {
    Serial.println("A entrada digital esta funcionando");
    Serial.println();
  }

  else
  {
    Serial.println("A entrada digital nao foi acionada");
    Serial.println();
  }

// TESTE DO GPIO16

  Serial.println("Acione a entrada digital correspondente ao GPIO16");
  
  if(digitalRead(GPIO16)==0)
  {
    Serial.println("A entrada digital esta funcionando");
    Serial.println();
  }

  else
  {
    Serial.println("A entrada digital nao foi acionada");
    Serial.println();
  }
 
}
