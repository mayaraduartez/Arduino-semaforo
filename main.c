int pinoVerde = 13;
int pinoLaranja = 12;
int pinoVermelho = 11;
int pinoVerde2 = 8;
int pinoLaranja2 = 9;
int pinoVermelho2 = 10;



void setup()
{
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoLaranja, OUTPUT);	
  pinMode(pinoVerde, OUTPUT);
  pinMode(pinoVermelho2, OUTPUT);
  pinMode(pinoLaranja2, OUTPUT);	
  pinMode(pinoVerde2, OUTPUT);
}

void loop()
{
  digitalWrite(pinoVermelho, HIGH);
  digitalWrite(pinoLaranja, LOW);
  digitalWrite(pinoVerde, LOW);
  digitalWrite(pinoVermelho2, LOW);
  digitalWrite(pinoLaranja2, LOW);
  digitalWrite(pinoVerde2, HIGH);
  delay(2000); 
  
  digitalWrite(pinoVermelho, HIGH);
  digitalWrite(pinoLaranja, LOW);
  digitalWrite(pinoVerde, LOW);
  digitalWrite(pinoVermelho2, LOW);
  digitalWrite(pinoLaranja2, HIGH);
  digitalWrite(pinoVerde2, HIGH);
  delay(2000); 
  
  digitalWrite(pinoVermelho, LOW);
  digitalWrite(pinoLaranja, LOW);
  digitalWrite(pinoVerde, HIGH);
  digitalWrite(pinoVermelho2, HIGH);
  digitalWrite(pinoLaranja2, LOW);
  digitalWrite(pinoVerde2, LOW);
  delay(2000); 
  
  digitalWrite(pinoVermelho, LOW);
  digitalWrite(pinoLaranja, HIGH);
  digitalWrite(pinoVerde, HIGH);
  digitalWrite(pinoVermelho2, HIGH);
  digitalWrite(pinoLaranja2, LOW);
  digitalWrite(pinoVerde2, LOW);
  delay(2000); 
  
  
}