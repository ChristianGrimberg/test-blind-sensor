#include <Arduino.h>
#include <SoftwareSerial.h>

void setup()
{
    Serial.begin(115200);
    pinMode(7, INPUT);
}

void loop()
{
    int value = digitalRead(7);
    
    if(value==HIGH)
        Serial.print("Cerrado: ");
    else if (value==LOW)
        Serial.print("Abierto: ");
    
    Serial.println(value);
    
    delay(50);
}
