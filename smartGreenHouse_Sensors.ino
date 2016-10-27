#include <Arduino.h>
//funcao para converter o valor para lumens
double Light (int RawADC0){
double Vout=RawADC0*0.0048828125;
int lux=(2500/Vout-500)/10;
return lux;
}

//funcao para converter a temperatura para celcius
double temperature(int RawADC0){
  double Vout=RawADC0*0.0048828125;
  double tem=(Vout-0.5)*100;
  return tem;
  }

int umidaSensor = A2;


float luminValue = 0;
float tempValue = 0;
float umidaValue = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {


  //inicializacao dos valores dos sensores
  luminValue =(Light(analogRead(0)));
  tempValue = (temperature(analogRead(1)));
  //umidaValue = analogRead(umidaSensor);



//converte a umidade do solo
  //falta ter nocao dos retornos do sensor e das unidades de medicao de umidade

  Serial.println("------------");
  Serial.println(luminValue);
  
  Serial.println(tempValue);
 
  //Serial.println(umidaValue);

  /*
  neste ponto do codigo os valores ja foram lidos e convertidos para as dimensoens proprias para analize segundo a literartura
  o sensoriamento deste NO foi concluido restando agora o envio para o servidor MQTT.
  */

  //inicio do bloco de envio





}
