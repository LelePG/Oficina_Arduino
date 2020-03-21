int Leitura_sensor = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)//Função que faz a leitura do sensor
{
  //Basicamente, o pino trigger é desligado e ligado rapidamente, gerando um pulso. Esse pulso então é lido pelo echo pin, e resulta no valor da distância
  pinMode(triggerPin, OUTPUT);  // limpa o trigger
  digitalWrite(triggerPin, LOW); //Seta o trigger pra desligado
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);// liga o trigger por 10 microssegundos
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);// e o desliga de novo
  pinMode(echoPin, INPUT);//seta o pino de echo
  return pulseIn(echoPin, HIGH);//retorna o valor lido no pino echo
}

int soundbuzzer =13; //Liga o soundbuzzer no pino 13
int led = 4;//Liga o led no pino 4 

void setup()
{
  Serial.begin(9600); //Inicia a conexão serial
  pinMode(led, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}

void loop()
{
  Leitura_sensor = 0.01723 * readUltrasonicDistance(2, 3);//A leitura é calculada e armazenada. O pino trigger está conectado ao pino 2 e o echo ao 3.
  Serial.println(Leitura_sensor);//Imprime o valor de leitura no monitor serial
  if (Leitura_sensor < 60) {//Se a leitura for menor que 60, ou seja, tem alguma coisa a menos de 60 cm do sensor
    digitalWrite(led, HIGH);//O led acende
    tone(soundbuzzer, 523, 100); // tocar o soundbuzzer na frequência 523 por 100 milissegundos
  } else {//Caso contrário(se a leitura for maior que 60)
    digitalWrite(led, LOW);//O led é desligado
    noTone(soundbuzzer);//Não liga o soundbuzzer
  }
}
