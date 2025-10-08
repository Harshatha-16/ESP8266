#include "Rajan_Robotics.h"

const char* ssid = " Harshatha VIVO 5G" ;     // Enter SSID(Wifi name) here
const char* password = "h12789054";  // Enter Password here

void setup() 
{
Serial.begin(9600);
}

void loop() 
{
RR_netconnect(ssid,password);
}