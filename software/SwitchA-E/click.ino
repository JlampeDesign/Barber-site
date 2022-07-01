//------------------------------------------------- Switch -----------------------------------------------
int sens1;      int sens1-2;
int sens2;      int sens2-2;
int sens3;      int sens3-2;
int sens4;      int sens4-2;
int sens5;      int sens5-2;
int sens6;      int sens6-2;

void switchOn() {

  sens1   = digitalRead(dataIn1);     //switch 1
  sens1-2 = digitalRead(dataIn2);
  sens2   = digitalRead(dataIn3);     //switch 2
  sens2-2 = digitalRead(dataIn4);
  sens3   = digitalRead(dataIn5);     //switch 3
  sens3-2 = digitalRead(dataIn6);
  sens4   = digitalRead(dataIn7);     //switch 4
  sens4-2 = digitalRead(dataIn8);
  sens5   = digitalRead(dataIn9);     //switch 5
  sens5-2 = digitalRead(dataIn10);
  sens6   = digitalRead(dataIn11);    //switch 6
  sens6-2 = digitalRead(dataIn12);
  
  if (sens1 == HIGH || sens1-2 == HIGH){
      dataSend1 = "1";
  } else if (sens2 == HIGH || sens2-2 == HIGH) {
      dataSend2 = "1";
  } else if (sens3 == HIGH || sens3-2 == HIGH) {
      dataSend3 = "1";
  } else if (sens4 == HIGH || sens4-2 == HIGH) {
      dataSend4 = "1";
  } else if (sens5 == HIGH || sens5-2 == HIGH) {
      dataSend5 = "1";
  } else if (sens6 == HIGH || sens6-2 == HIGH) {
      dataSend6 = "1";
  } else {
      dataSend1 = "0";
      dataSend2 = "0";
      dataSend3 = "0";
      dataSend4 = "0";
      dataSend5 = "0";
      dataSend6 = "0";
  }
  delay(200);  
  
}
