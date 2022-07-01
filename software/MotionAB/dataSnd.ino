void dataSnd() {
  //------------------------------- motion detection -----------------------------
  if (motionMrk == true) {
    if (OneMrk == true) {
      dataSend = "1";
    }
    if(TwoMrk == true){
      dataSend = "2";
    }
  } else {
    dataSend = "0";
  }
}
