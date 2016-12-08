#include <SimpleDHT.h>

int pinDHT11 = 2; // pin number on board 
SimpleDHT11 dht11; // dh11 object from class

void setup() {
  Serial.begin(115200);
}

void loop() {
  
  Serial.println("_____________________________");
 
  Serial.println("Temprature and humidity  readings ");
  
  byte temperature = 0;
  byte humidity = 0;

  if (dht11.read(pinDHT11, &temperature, &humidity, NULL)) {

    Serial.print("sensor readings fail");
    
    return;
  }
  

  Serial.print((int)temperature); Serial.print(" C "); 
  Serial.print((int)humidity); Serial.println("%");
  

  delay(2000);
}

// نهاية الكود
//  أنور شطاري
