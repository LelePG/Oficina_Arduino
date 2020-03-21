int Leitura_sensor = 0; // Variável para guardar a leitura do sensor

int sensor = 3;//Pino onde o sensor vai estar conectado
int soundbuzzer = 13;//Pino onde o sounsbuzzer vai estar conectado

void setup()
{
  pinMode(sensor, INPUT);//O sensor é leitura de dados
  Serial.begin(9600);//Início da conexão serial
  pinMode(soundbuzzer, OUTPUT);//O soundbuzzer é saída de dados
}


void loop()
{
  Leitura_sensor = digitalRead(sensor);//faz a leitura
  Serial.println(Leitura_sensor);//Imprime no monitor serial
  if (Leitura_sensor == 1) {//Se a leitura for 1, ou seja, há movimento
    tone(soundbuzzer, 294, 100); // Toca o soundbuzzer na frequência 294 por 100 milissegundos
  } else {//se não houver movimento
    noTone(13);//o soundbuzzer não toca
  }
}
