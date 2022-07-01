#include "WiFi.h"
#include "HTTPClient.h"

const char* ssid       = "";    // hotspot Job
const char* password   = ""; 

const char* server     = "";
String my_Api_key      = "";
String token           = "";

const int PirOne = 27;
const int PirTwo = 32;

int value1        = 0;
int value2        = 0;
int pirValue      = LOW;
bool motionMrk    = false;
bool OneMrk       = false;
bool TwoMrk       = false;
String dataSend   = "";

// -------------------------------- imported voids -----------------------------------
void motion();
void dataSnd();
void setupWifi();
void sendingData();

void setup() {

  Serial.begin(115200);
  pinMode(PirOne, INPUT);
  pinMode(PirTwo, INPUT);

  //setupWifi();
  delay(500);
}

void loop() {

  motion();

  dataSnd();
  
}
