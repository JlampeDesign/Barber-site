void sendingData(){
  //------------------------------- motion detection -----------------------------
  if (switchMrk == false) {
    dataSend = "0";
  } else {
    dataSend = "1";
  }
  //------------------------------- Send result data -----------------------------
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    HTTPClient http;

    http.begin(server);
    http.addHeader("Content-Type", "application/json");

    String httpRequestData = "{\"api_key\":\"" + my_Api_key + "\",\"field1\":\"" + String(dataSend) + "\"}";
    int httpResponseCode = http.POST(httpRequestData);

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
