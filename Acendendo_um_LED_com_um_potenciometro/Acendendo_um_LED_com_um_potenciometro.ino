int potenciometro = A5; //pino onde vai ser ligado o potenciômetro
int led = 3;// pino onde é ligado o LED

int Leitura_Pot = 0;//Variável pra gardar a leitura do potenciômetro
int Escrita_Led = 0; // Variável pra guardar o valor que deve ser escrito no LED

void setup()
{
  pinMode(potenciometro, INPUT);//A leitura do potenciômetro é um input
  pinMode(led, OUTPUT);//E o LED um output
}

void loop()
{
  Leitura_Pot = analogRead(potenciometro);//realiza a leitura
  Escrita_Led = map(Leitura_Pot, 0, 1023, 0, 255);//faz a conversão de "escala"
  analogWrite(led, Escrita_Led);//escreve no led
  delay(100);//pra poder ver a alteração de brilho

}
