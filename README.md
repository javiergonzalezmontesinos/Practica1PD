# Práctica 1: Blink con ESP32-WROOM-32D

Este proyecto hace parpadear un LED utilizando el microcontrolador ESP32-WROOM-32D y PlatformIO.

## Código
El código principal se encuentra en `src/main.cpp`.

## Diagrama de Flujo (Apartado 1)
Inicio
   │
   ▼
Configurar pin 2 como salida
   │
   ▼
Bucle infinito
   │
   ├── Encender LED
   │
   ├── Esperar 500 ms
   │
   ├── Apagar LED
   │
   └── Esperar 500 ms

## Diagrama de tiempos (Apartado 1)
Tiempo (ms) | Estado del LED
------------|---------------
0           | Encendido
500         | Apagado
1000        | Encendido
1500        | Apagado
...         | ...


## Historial de Versiones

- **v1.0**: Versión inicial (Apartado 1). LED parpadea cada segundo.
- **v2.0**: Añadido envío de datos 'ON' y 'OFF' por el puerto serie, ampliada la espera a 1000ms (Apartado 2).
- **v3.0**: Implementación del control del LED mediante registros de entrada y salida.