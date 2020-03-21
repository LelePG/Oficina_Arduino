int led = 5;//crio uma variável para guardar em qual pino o LED vai estar colocado

void setup() {
  pinMode(led, OUTPUT); //define que o LED será ligado no pino definido na variável, e que vai ser uma saida de dados

}

void loop() {
  digitalWrite(led, HIGH); //Liga o LED
  delay(1000);//espera 1 segundo
  digitalWrite(led, LOW); //Desliga o LED
  delay(1000); //Espera 1 segundo

}
