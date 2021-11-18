#include "arduino_secrets.h"
/* 
  Sketch generated by the Arduino IoT Cloud Thing "esp32-project"
  https://create.arduino.cc/cloud/things/b8ff9517-4f12-41e7-b05e-1fdb4b60046b 

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  int random_value;
  bool led_switch;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  
  
}

/*
  Since LedSwitch is READ_WRITE variable, onLedSwitchChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLedSwitchChange()  {
  // Add your code here to act upon LedSwitch change
  if(led_switch)
    Serial.println("LED Yandı");
  else
    Serial.println("Len Sondu");

  random_value ++ ;
}
