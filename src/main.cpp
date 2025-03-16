#include <Arduino.h>  // Incluir la biblioteca principal de Arduino

void setup() {
    Serial.begin(115200); // Iniciar el puerto serie
}

void loop() {
    // Leer la temperatura interna del ESP32
    float temperature = temperatureRead();

    // Enviar la temperatura al puerto serie
    Serial.print("Temperatura interna: ");
    Serial.print(temperature);
    Serial.println(" °C");

    delay(1000); // Esperar 1 segundo antes de la siguiente lectura
}