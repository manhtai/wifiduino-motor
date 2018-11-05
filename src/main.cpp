#if !defined(MY_AUTH)
  #define MY_AUTH ""
#endif

#if !defined(MY_SSID)
  #define MY_SSID ""
#endif

#if !defined(MY_PASS)
  #define MY_PASS ""
#endif

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

void setup()
{
  Serial.begin(9600);
  Blynk.begin(MY_AUTH, MY_SSID, MY_PASS);
}

void loop()
{
  Blynk.run();
}
