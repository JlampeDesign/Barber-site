#include "WiFi.h"
#include "HTTPClient.h"

const char* ssid       = "Skynet";    // hotspot Job
const char* password   = "ESP123456789#";

const char* server     = "";
String my_Api_key      = "";
String token           = "";

const int Switch1 = 27;

const int dataIn1 = 33;
const int dataIn2 = 35;

int sensorState;
int sensorState2;

int value     = 0;
int swtchVal  = LOW;
bool switchMrk = false;
String dataSend = "";

// -------------------------------- imported voids -----------------------------------
void motion();
void setupWifi();
void sendingData();

void setup() {

  Serial.begin(115200);
  pinMode(dataIn1, INPUT);
  pinMode(dataIn2, INPUT);

  Serial.println("Looking for sensor data");
  delay(500);

  setupWifi();
  delay(500);
}

void loop() {

  switchOn();

  sendingData();
  
}
