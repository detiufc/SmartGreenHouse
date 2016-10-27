#include <Arduino.h>
/*
Codigo do No atuador

*/


int lamp1 = 1;
int lamp2 = 2;
int fan = 3;
int regador = 4;


void setup() {
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(regador, OUTPUT);
  Serial.begin(9600);
}

void loop() {

//codigo para receber informacoes do Servidor Mqtt e possivelmente fazer alguma atuacao.

}


//metodos para ligar ou desligar os atuadores, os sinais sao enviados para um Rele para realizar os procedimentos.
void ligarLampada1(){
  digitalWrite(lamp1,HIGH);
  }
void desligarLampada1(){
  digitalWrite(lamp1,LOW);
  }

void ligarLampada2(){
  digitalWrite(lamp2,HIGH);}
void desligarLampada2(){
  digitalWrite(lamp2,LOW);
  }

void ligarFAN(){
  digitalWrite(fan,HIGH);
  }
void desligarFAN(){
  digitalWrite(fan,LOW);
  }

void LigarRegador(){
  digitalWrite(regador,HIGH);
  }
void DesligarRegador(){
  digitalWrite(regador,LOW);
  }
