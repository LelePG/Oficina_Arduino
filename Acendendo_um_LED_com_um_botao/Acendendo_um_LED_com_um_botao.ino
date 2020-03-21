int ler_botao = 9; // define uma variável onde vou guardar a leitura do botão
int led = 7;

void setup()
{
  pinMode(ler_botao, INPUT);//define a leitura do botão como entrada
  pinMode(led, OUTPUT);//e o led como saída
}

void loop()
{
  if (digitalRead(ler_botao) == 1) { // se o botão foi pressionado
    digitalWrite(led, HIGH); //acende o LED
  }
  //Quando soltar o botão, o código segue seu curso
  digitalWrite(led, LOW); //desliga o LED
}
