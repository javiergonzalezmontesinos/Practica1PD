# Práctica 1: Blink con ESP32-WROOM-32D

Este proyecto hace parpadear un LED utilizando el microcontrolador ESP32-WROOM-32D y PlatformIO.

## Código
El código principal se encuentra en `src/main.cpp`.

## Diagrama de Flujo (Apartado 1)
![Diagrama de Flujo](images/diagrama_flujo_apartado1.png)


## Diagrama de tiempos (Apartado 1)
![Diagrama de tiempos](images/diagrama_tiempos_apartado1.png)



## Historial de Versiones

- **v1.0**: Versión inicial (Apartado 1). LED parpadea cada segundo.
- **v2.0**: Añadido envío de datos 'ON' y 'OFF' por el puerto serie, ampliada la espera a 1000ms (Apartado 2).
- **v3.0**: Implementación del control del LED mediante registros de entrada y salida.