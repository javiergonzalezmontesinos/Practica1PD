#include <Arduino.h>  // Incluir la biblioteca de Arduino para PlatformIO

#define POT_PIN 36   // Pin del potenciómetro (GPIO36, ADC1_CH0)
#define DAC_PIN 25   // Pin de salida DAC (GPIO25, DAC1)
#define PWM_PIN 26   // Pin de salida PWM (GPIO26)
#define PWM_RES 8    // Resolución del PWM (8 bits = 0-255)

void setup() {
    Serial.begin(115200); // Iniciar el puerto serie

    // Configurar el pin PWM
    ledcSetup(0, 5000, PWM_RES); // Canal 0, frecuencia de 5 kHz, resolución de 8 bits
    ledcAttachPin(PWM_PIN, 0);   // Asociar el pin PWM al canal 0
}

void loop() {
    // Leer el valor del potenciómetro (ADC)
    int adcValue = analogRead(POT_PIN); // Valor entre 0 y 4095 (12 bits)

    // Convertir el valor del ADC a voltaje (0V - 3.3V)
    float voltage = (adcValue / 4095.0) * 3.3;

    // Convertir el valor del ADC a un rango de 8 bits (0-255) para el DAC y el PWM
    int dacValue = map(adcValue, 0, 4095, 0, 255);

    // Escribir el valor en el DAC
    dacWrite(DAC_PIN, dacValue);

    // Escribir el valor en el PWM
    ledcWrite(0, dacValue); // Escribir el valor en el canal 0 (PWM)

    // Enviar los valores al puerto serie
    Serial.print("Valor ADC: ");
    Serial.print(adcValue);
    Serial.print(" | Voltaje: ");
    Serial.print(voltage, 2); // Mostrar 2 decimales
    Serial.print(" V");
    Serial.print(" | Valor DAC: ");
    Serial.print(dacValue);
    Serial.print(" | Valor PWM: ");
    Serial.println(dacValue);

    delay(500); // Pequeño retardo para evitar lecturas demasiado rápidas
}