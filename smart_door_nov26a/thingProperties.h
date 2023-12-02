// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "9b3c39a8-0386-457a-ba84-ed3c2240c89d";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onDoorlogChange();
void onTempChange();
void onHumidChange();
void onDoorlockedChange();
void onLedChange();
  
String doorlog;
float temp;
int humid;
bool doorlocked;
bool led;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(doorlog, READWRITE, ON_CHANGE, onDoorlogChange);
  ArduinoCloud.addProperty(temp, READWRITE, ON_CHANGE, onTempChange);
  ArduinoCloud.addProperty(humid, READWRITE, ON_CHANGE, onHumidChange);
  ArduinoCloud.addProperty(doorlocked, READWRITE, ON_CHANGE, onDoorlockedChange);
  ArduinoCloud.addProperty(led, READWRITE, ON_CHANGE, onLedChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);