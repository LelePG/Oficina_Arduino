int botao = 12;//Pino onde vai ser ligado o botão
int soundbuzzer = 8;//Pino onde vai ser ligado o soundbuzzer

void setup()
{
  pinMode(botao, INPUT);//O valor do botão é lido, então ele é uma entrada de dados
  pinMode(soundbuzzer, OUTPUT); //o valor é escrito no soundbuzzer, então ele é uma saída de dados
}

void loop()
{
  if (digitalRead(botao) == 1) {//Se o botão for apertado
    tone(soundbuzzer, 294, 100); // tocar, no soundbuzzer, a frequência 294 por 100 milissegundos
  }
  else {//se o botão não for apertado
    noTone(soundbuzzer);//O soundbuzzer não toca
  }
}
