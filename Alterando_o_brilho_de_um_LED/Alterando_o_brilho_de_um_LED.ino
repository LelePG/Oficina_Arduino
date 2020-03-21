int Escreve_Led = 0; // Valor que vai ser escrito no LED

int led = 3;// O LED estará ligado no pino 3

void setup()
{
  pinMode(led, OUTPUT);//Led definido como saída de dados
}

void loop()
{
  //este loop aumenta o brilho, indo de 0 até 255, que é o valor do brilho máximo de um LED
  for (Escreve_Led  = 0; Escreve_Led  < 255; Escreve_Led ++) {
    analogWrite(led, Escreve_Led);
    delay(15); // Wait for 15 millisecond(s)
  }

  //A variável escreve_led sai do loop anterior com o valor 255. Aqui, o brilho diminui, indo de 255 à zero
  for (Escreve_Led ; Escreve_Led  > 0; Escreve_Led --) {
    analogWrite(led, Escreve_Led);
    delay(15); // Wait for 15 millisecond(s)
  }
}
