//Declaração dos potenciômetros
int pt1 = A0;
int pt2 = A1;
int pt3 = A2;

//Declaração dos LED
int r = 9;
int g = 10;
int b = 11;

void setup()
{
  //Os potenciômetros são entradas de dados e os pinos do led RBG, saídas.
  pinMode(pt1, INPUT);
  pinMode(r, OUTPUT);
  pinMode(pt2, INPUT);
  pinMode(g, OUTPUT);
  pinMode(pt3, INPUT);
  pinMode(b, OUTPUT);
}

void loop()
{
  analogWrite(r, map(analogRead(pt1), 0, 1023, 0, 255));//Faz a leitura, conversão de "escala" e escreve no respectivo pino
  analogWrite(g, map(analogRead(pt2), 0, 1023, 0, 255));//Faz a leitura, conversão de "escala" e escreve no respectivo pino
  analogWrite(b, map(analogRead(pt3), 0, 1023, 0, 255));//Faz a leitura, conversão de "escala" e escreve no respectivo pino
  delay(100); //Espera por 100 milissegundos
}
