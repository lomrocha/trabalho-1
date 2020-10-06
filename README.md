# trabalho-1

## Seções

- [Setup](#setup)
- [How to send the right data](#how-to-send-the-right-data)
- [Types of cards and their settings](#types-of-cards-and-their-settings)
- [Locking your dashboard](#locking-your-dashboard)
- [Browser support](#browser-support)
- [Contributing](#contributing)
- [Code of conduct](#code-of-conduct)

## Setup

O pino digital de número 8 é o pino que está conectado ao Buzzer e, portanto, precisa ser setado como OUTPUT (Saída).
Para a utilização do Monitor Serial, é preciso configurar uma taxa de transferência.

    ```
    void setup()
    {
        pinMode(8, OUTPUT);
        Serial.begin(9600);
    }
    ```