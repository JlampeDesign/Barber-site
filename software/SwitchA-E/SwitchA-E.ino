#include "WiFi.h"
#include "HTTPClient.h"

const char* ssid       = "Skynet";    // hotspot Job
const char* password   = "ESP123456789#";

//--------------- Server + bearer tokens -----------------------------

const char* server     = "http://jans-sensors.tk/sensors/data";
String token1          = "";
String token2          = "";
String token3          = "";
String token4          = "";
String token5          = "";
String token6          = "";

//-------------- GPIO switches (undefined) ---------------------------

const int dataIn1 = ; // switch 1
const int dataIn2 = ;
const int dataIn3 = ; // switch 2
const int dataIn4 = ;
const int dataIn5 = ; // switch 3
const int dataIn6 = ;
const int dataIn7 = ; // switch 4
const int dataIn8 = ;
const int dataIn9 = ; // switch 5
const int dataIn10 = ;
const int dataIn11 = ; // switch 6
const int dataIn12 = ;

// ------------------------------data defenined-----------------------

String dataSend1 = "";
String dataSend2 = "";
String dataSend3 = "";
String dataSend4 = "";
String dataSend5 = "";
String dataSend6 = "";

// -------------------------------- imported voids -------------------

void switchOn();
void setupWifi();
void sendingData();

//--------------------------------- setup start ----------------------
void setup() {

  Serial.begin(115200);
  pinMode(dataIn1, INPUT);
  pinMode(dataIn2, INPUT);

  Serial.println("Looking for sensor data");
  delay(500);

  setupWifi();
  delay(500);
}

//--------------------------------- loop start ----------------------
void loop() {

  switchOn();

  sendingData();
  
}
