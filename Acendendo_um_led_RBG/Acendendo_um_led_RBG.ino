//Declaração das variáveis onde vão ser colocados os terminais do LED
//Um LED rbg tem três terminais, um para cada cor.
int r = 6;
int g = 3;
int b = 5;

void setup()
{
  //Todos são saídas de dados
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop()
{
  //Escrever um valor para cada LED, os valores escritos em todos os pinos juntos dá a cor que queremos
  analogWrite(r, 153);
  analogWrite(g, 51);
  analogWrite(b, 153);
}
