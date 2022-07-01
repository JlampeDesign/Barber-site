//------------------------------------------------- WIFI ---------------------------------------------
void setupWifi() {
  WiFi.disconnect();
  delay(500);
  
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi..");
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1500); 
  }
  Serial.println("Connected to the WiFi network");
}
