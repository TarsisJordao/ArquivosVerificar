
const int portaADC=0;
int matValADC[100];
volatile int valorADC_medio;

float tensao;

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  int soma=0;
  
  for(int i=0; i<100; i++)
  {
    matValADC[i]= analogRead(portaADC);
    delay(10);
  }
  
  for(int i=0; i<100; i++)
  {
    soma+= matValADC[i];
  }

  valorADC_medio=soma/100;

  tensao= valorADC_medio/1023.0;
  
  Serial.print("valor ADC: ");
  Serial.print(valorADC_medio);
  Serial.println();

  Serial.print("O valor de tensão em Volts na entrada analogica eh: ");
  Serial.print(tensao);
  Serial.println("V");
  Serial.println();

  delay(1000);

}
