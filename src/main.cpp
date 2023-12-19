#define BLYNK_TEMPLATE_ID "TMPL6nCKHKsNi"
#define BLYNK_TEMPLATE_NAME "WORKSHOP"
#define BLYNK_AUTH_TOKEN "uZbOpwshdTLo8bi1qp3-jWuEr5qgkkFG"

#define BLYNK_PRINT Serial

#include <Arduino.h>
#include <WiFi.h>
#include <WiFiManager.h>
#include <BlynkSimpleEsp32.h>

#define ESP32_SSID "ESP32_CEAFO"

WiFiManager wifiManager;

void setup()
{
  Serial.begin(9600);

  wifiManager.resetSettings();
  wifiManager.autoConnect("ESP32_CEAFO");
  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("connected...yeey :D");
  }
  else
  {
    Serial.println("connection failed :(");
  }

  Blynk.begin(BLYNK_AUTH_TOKEN, WiFi.SSID().c_str(), WiFi.psk().c_str());
  
}

void loop()
{
  Blynk.run();
}                     