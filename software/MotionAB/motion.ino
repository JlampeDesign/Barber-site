//------------------------------------------------- Motion -----------------------------------------------
void motion() {

  value1 = digitalRead(PirOne);
  value2 = digitalRead(PirTwo);

  if (value1 == HIGH || value2 == HIGH) {

    if (pirValue == LOW && value1 > value2) {
      motionMrk = true;
      OneMrk = true;
      pirValue = HIGH;
    }

    if (pirValue == LOW && value2 > value1) {
      motionMrk = true;
      TwoMrk = true;
      pirValue = HIGH;
    }
    
  } else {

    if (pirValue == HIGH) {
      motionMrk = false;
      OneMrk = false;
      TwoMrk = false;
      pirValue = LOW;
    }
  }

}
