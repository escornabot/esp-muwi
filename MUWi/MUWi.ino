#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

IPAddress apIP(192, 168, 1, 1);
DNSServer dnsServer;
ESP8266WebServer webServer(80);

String responseHTML =
#include "html.h"
;

void atenderPeticion() {
  // servimos la página web con el mando de control
  webServer.send(200, "text/html", responseHTML);
}

void atenderAccion() {
  // obtenemos el comando
  String comando=webServer.arg("comando");
  // lo enviamos al escornabot como si fuéramos un dispositivo Bluetooth + APP
  Serial.print(comando[0]);
  Serial.print('\n');
  // enviamos el comando de vuelta al cliente web
  webServer.send(200, "text/plain", comando);
}


//##  M A I N  ###############################################################//

void setup() {
  delay(1000); // damos tiempo a arrancar al Escornabot
  Serial.begin(9600); // simulamos un dispositivo Bluetooth
  Serial.println("Listo");

  // levantamos punto de acceso
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP("ESCORNABOT");

  // servidor DNS para el portal cautivo
  dnsServer.start(53, "*", apIP); // responde apIP a todas las peticiones

  // servidor WEB para el portal cautivo
  webServer.onNotFound(atenderPeticion);  // respuesta general
  webServer.on("/accion", atenderAccion); // respuesta a acción
  webServer.begin();
}


void loop() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}
