void sendingData(){
  //------------------------------- Send result data -----------------------------
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    HTTPClient http;

    http.begin(server);
    // ----- switch One -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token1);
    String httpData1 = "{\"message\":\"" + String(dataSend1) + "\"}";
    int httpSend1 = http.POST(httpData1);
    
    // ----- switch Two -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token2);
    String httpData2 = "{\"message\":\"" + String(dataSend2) + "\"}";
    int httpSend2 = http.POST(httpData2);
    
    // ----- switch Three -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token3);
    String httpData3 = "{\"message\":\"" + String(dataSend3) + "\"}";
    int httpSend3 = http.POST(httpData3);
    
    // ----- switch Four -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token4);
    String httpData4 = "{\"message\":\"" + String(dataSend4) + "\"}";
    int httpSend4 = http.POST(httpData4);
    
    // ----- switch Five -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token5);
    String httpData5 = "{\"message\":\"" + String(dataSend5) + "\"}";
    int httpSend5 = http.POST(httpData5);

    // ----- switch Six -----
    http.addHeader("Content-Type", "application/json");
    http.addHeader("Authorization", "Bearer " + token6);
    String httpData6 = "{\"message\":\"" + String(dataSend6) + "\"}";
    int httpSend6 = http.POST(httpData6);

    String response = http.getString();

    Serial.print("HTTP Response code: ");
    Serial.println(response);

    http.end();
  }

  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("ESP32 is not connected to a network");
    delay(5000);
  }
}
