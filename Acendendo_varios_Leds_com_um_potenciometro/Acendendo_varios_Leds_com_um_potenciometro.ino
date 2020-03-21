int Escreve_Led = 0;//Valor a ser escrito

//Declaração dos leds
int led1 = 3;
int led2 = 6;
int led3 = 5;
int led4 = 9;

//potenciometro
int pot = A5;

void setup()
{
  pinMode(pot, INPUT);//O pino do potenciômetro é input
  //Todos os Leds são saídas de dados
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{
  Escreve_Led = map(analogRead(pot), 0, 1023, 0, 255);//Faz a leitura do potenciômetro e a conversão
  //Os dois primeiros LEDs acendem de acordo com a movimentação do potenciômetro
  analogWrite(led1, Escreve_Led);
  analogWrite(led2, Escreve_Led);
  //Os dois leds seguintes, apagam de acordo com a movimentação do potenciômetro
  //Isso é feito escrevendo o valor de aceso (255, valor de brilho total do LED) e diminuindo o valor lido
  analogWrite(led3, (255 - Escreve_Led));
  analogWrite(led4, (255 - Escreve_Led));
  delay(100); //delay pra ver a alteração de luz
}
