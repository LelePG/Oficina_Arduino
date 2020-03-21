#include <Servo.h>

//Variáveis de controle
int Leitura_Luz = 0;
int Leitura_anterior = 0;
int escrita_Servo = 0;

Servo servo_13;// Criação de um objeto servo chamado servo_13

void setup()
{
  pinMode(A5, INPUT);//O sensor será ligado ao pino A5
  servo_13.attach(13);// servo 13 está conectado ao pino 13

}

void loop()
{
  if (analogRead(A5) < 100) {// Primeiro é definida a leitura do estado atual de iluminação. Se for menor que 100, é considerado escuro, caso contrário é considerado claro.
    Leitura_Luz = 0;
  } else {
    Leitura_Luz = 1;
  }

  if (Leitura_Luz != Leitura_anterior) {//Se o estado atual for diferente da leitura que eu fiz anteriormente, ou seja, antes estava claro e agora está escuro, ou o contrário
    if (Leitura_Luz == 1) {//Se a leitura feita é um, significa que agora está claro, e antes escuro
      escrita_Servo = -180;//então decide que o motor vai virar 180 graus para a esquerda
      servo_13.write(escrita_Servo);//e se aplica essa mudança
    } else {//Senão, o valor de leitura luz é zero. O que significa que estava claro e agora está escuro
      escrita_Servo = 180;//então decide que o motor vai girar 180 graus para a direita
      servo_13.write(escrita_Servo);//se aplica essa mudança
    }
    Leitura_anterior = Leitura_Luz;//se atualiza a variável
  }
}
