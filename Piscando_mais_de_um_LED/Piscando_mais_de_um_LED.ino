int led1 = 5;//crio variáveis para guardar onde os pinos dos LEDs serão ligados
int led2 = 6;
int led3 = 7;
int led4 = 8;

void setup() {
  pinMode(led1, OUTPUT); //define que o LED será ligado no pino definido na variável, e que vai ser uma saida de dados
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  //Primeiro estado
  digitalWrite(led1, HIGH); //Ligado
  digitalWrite(led2, LOW); //Desligado
  digitalWrite(led3, HIGH); //Ligado
  digitalWrite(led4, LOW); //Desligado

  //espera 1 segundo
  delay(1000);//espera 1 segundo

  //Segundo estado
  digitalWrite(led1, LOW); //Desligado
  digitalWrite(led2, HIGH); //Ligado
  digitalWrite(led3, LOW); //Desligado
  digitalWrite(led4, HIGH); //Ligado

  //espera 1 segundo
  delay(1000);
}
