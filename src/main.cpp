#include <Arduino.h>  // Solo necesario si usas PlatformIO

#define LED_PIN 2  // Pin del LED integrado (GPIO2)

void setup() {
    // Inicializar el puerto serie para depuración
    Serial.begin(115200);

    // Configurar el pin como salida usando el registro GPIO_ENABLE_REG
    // GPIO_ENABLE_W1TS: Establece (set) el bit correspondiente al pin para habilitarlo como salida
    GPIO.enable_w1ts = (1 << LED_PIN);
}

void loop() {
    // Encender el LED (poner el pin en HIGH)
    // GPIO_OUT_W1TS: Establece (set) el bit del pin para activarlo (HIGH)
    GPIO.out_w1ts = (1 << LED_PIN);

    // Enviar mensaje "ON" por el monitor serie
    Serial.println("LED ON");

    // Esperar 1 segundo
    delay(1000);

    // Apagar el LED (poner el pin en LOW)
    // GPIO_OUT_W1TC: Limpia (clear) el bit del pin para desactivarlo (LOW)
    GPIO.out_w1tc = (1 << LED_PIN);

    // Enviar mensaje "OFF" por el monitor serie
    Serial.println("LED OFF");

    // Esperar 1 segundo
    delay(1000);
}