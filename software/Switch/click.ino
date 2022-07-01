//------------------------------------------------- Switch -----------------------------------------------
void switchOn() {

  sensorState = digitalRead(dataIn1);
  sensorState2 = digitalRead(dataIn2);
  
  if (sensorState == HIGH || sensorState2 == HIGH){
     switchMrk = true;
  }
  else{
    switchMrk = false;
  }
  delay(200);  
  
}
