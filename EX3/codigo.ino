//VOID SETUP DEFINE AS PORTAS DO ARDUINO
void setup()
{//INICIA SETUP
  pinMode(13, OUTPUT);//DEFINE A PORTA COMO ENTRADA OU SAIDA
  pinMode(5, OUTPUT);//DEFINE A PORTA COMO SAIDA
}//FINALIZA SETUP

//VOID QUE TEM UM CICLO PERPÉTUO
void loop()
{//INICIA LOOP
 
  //CONTROLE DO LED 
  digitalWrite(13, HIGH);//LIGANDO O MEU LED 
  delay(2000); //ESPERANDO 1 SEGUNDO
  digitalWrite(5, HIGH);//DESLIGANDO O MEU LED
  delay(2000); //ESPERANDO 1 SEGUNDO
  digitalWrite(4, HIGH);//LIGANDO O MEU LED 
  delay(2000); //ESPERANDO 1 SEGUNDO
  digitalWrite(3, HIGH);//DESLIGANDO O MEU LED
  delay(2000); //ESPERANDO 1 SEGUNDO
 digitalWrite(2, HIGH);//DESLIGANDO O MEU LED 
  delay(2000); //
  digitalWrite(13,LOW);//DESLIGANDO O MEU LED 
  digitalWrite(5,LOW);//DESLIGANDO O MEU LED 
  digitalWrite(4,LOW);//DESLIGANDO O MEU LED 
  digitalWrite(3,LOW);//DESLIGANDO O MEU LED 
  digitalWrite(2,LOW);//DESLIGANDO O MEU LED 
 
  delay(2000); //
 
}//RETORNA PARA O INICIO LOOP



