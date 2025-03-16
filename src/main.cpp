#include <Arduino.h>

#define LED_BUILTIN 2  // Pin del LED integrado en la ESP32
#define DELAY 500      // Retardo de 500 ms

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);  // Configurar el pin como salida
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  // Encender el LED
    delay(DELAY);                      // Esperar 500 ms
    digitalWrite(LED_BUILTIN, LOW);    // Apagar el LED
    delay(DELAY);                      // Esperar 500 ms
}