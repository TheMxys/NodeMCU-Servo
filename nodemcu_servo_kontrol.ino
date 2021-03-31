#include <Servo.h>
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "8Z83twqz3FiRvsoLun6oJV2wv-S3tTb4";


char ssid[] = "SUPERONLINE_ADG";
char pass[] = "753123753123a";

Servo servo;

void setup()
{
  
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

  servo.attach(D8);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V2){
  servo.write(param.asInt());
  }
