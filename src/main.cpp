#if !defined(AUTH)
  #define AUTH ""
#endif

#if !defined(SSID)
  #define SSID ""
#endif

#if !defined(PASS)
  #define PASS ""
#endif

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

void setup()
{
  Serial.begin(9600);
  Blynk.begin(AUTH, SSID, PASS);
}

void loop()
{
  Blynk.run();
}
