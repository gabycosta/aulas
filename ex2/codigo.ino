//VOID SETUP DEFINE AS PORTAS DO ARDUINO
void setup()
{//INICIA SETUP
  pinMode(13, OUTPUT);//DEFINE A PORTA COMO ENTRADA OU SAIDA
  pinMode(5, OUTPUT);//DEFINE A PORTA COMO SAIDA
}//FINALIZA SETUP

//VOID QUE TEM UM CICLO PERPÉTUO
void loop()
{//INICIA LOOP
 
  //CONTROLE DO LED VERDE
  digitalWrite(13, HIGH);//LIGANDO O MEU LED VERDE
  delay(1000); //ESPERANDO 1 SEGUNDO
  digitalWrite(13, LOW);//DESLIGANDO O MEU LED VERDE
  delay(1000); //ESPERANDO 1 SEGUNDO
 
    //CONTROLE DO LED AMARELO
  digitalWrite(5, HIGH);//LIGANDO O MEU LED AMARELO
  delay(1000); //ESPERANDO 1 SEGUNDO
  digitalWrite(5, LOW);//DESLIGANDO O MEU LED AMARELO
  delay(1000); //ESPERANDO 1 SEGUNDO
 
 
 
 
 
}//RETORNA PARA O INICIO LOOP

