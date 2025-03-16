#include <Arduino.h>

#define LED_BUILTIN 2  // Pin del LED integrado en la ESP32
#define DELAY 1000     // Retardo de 1000 ms (1 segundo)

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);  // Configurar el pin como salida
    Serial.begin(115200);          // Inicializar el puerto serie a 115200 baudios
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  // Encender el LED
    Serial.println("LED ON");             // Enviar "ON" al puerto serie
    delay(DELAY);                     // Esperar 1000 ms
    digitalWrite(LED_BUILTIN, LOW);   // Apagar el LED
    Serial.println("LED OFF");            // Enviar "OFF" al puerto serie
    delay(DELAY);                     // Esperar 1000 ms
}