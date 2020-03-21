int Leitura_Luz = 0;//Variável pra guardar o valor de leitura do sensor
//LEDS
int led1 = 3;
int led2 = 4;
//Sensor
int ldr = A5;

void setup(){
  pinMode(ldr, INPUT);//a informação é lida do sensor
  Serial.begin(9600);//Inicia a conexão serial para podemos ver qual é a leitura do sensor.
  //Os leds são saída de dados
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  Leitura_Luz = analogRead(ldr);//Faz a leitura do sensor
  Serial.println(Leitura_Luz);//Mostra a leitura pro usuário
  if (Leitura_Luz >= 100) {//se a leitura do sensor for maior ou igual que 100, o que indica um certo nível de claridade, o led1 é aceso e o led 2 é apagado
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } else { //Se a leitura for inferior a 100, o led2 é aceso e o led1 é apagado
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}
