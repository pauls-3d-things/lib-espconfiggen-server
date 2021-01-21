#ifndef CONFIG_SERVER_H
#define CONFIG_SERVER_H
#include "ConfigServerConfig.h"
#include <ESP8266WebServer.h>

void setupConfigServer(ESP8266WebServer &server, ConfigServerConfig &cfg, EEPROMClass &eeprom);

#endif