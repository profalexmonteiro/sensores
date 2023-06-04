// Pino analo?gico que sera? ligado ao pino 2 do LM 35 
const int LM 35 = A0; 
//Tempo de atualizac?a?o entre as leituras em ms 
const int ATRASO = 5000; 
//Base de conversa?o para Graus Celsius ((5/1023) * 100) 
const float BASE_CELSIUS = 0.4887585532746823069403714565; 
void setup() { 
  Serial.begin(9600); 

}
void loop() { 
  Serial.print(?Temperatura: ?); 
  Serial.print(lerTemperatura()); 
  Serial.println(?\260C?); 
  delay(ATRASO); 
} 

float lerTemperatura() { 
  return (analogRead(LM35) * BASE_CELSIUS); 
} 