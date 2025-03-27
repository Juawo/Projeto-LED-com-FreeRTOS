# Projeto LED com FreeRTOS

Este projeto demonstra o uso do sistema operacional em tempo real FreeRTOS em um microcontrolador Raspberry Pi Pico para controlar o piscar de dois LEDs.

## Descrição

O código utiliza duas tarefas do FreeRTOS para alternar o estado de dois LEDs (verde e vermelho) conectados aos pinos GPIO do Raspberry Pi Pico. Cada LED pisca em intervalos de 250ms, de forma independente, utilizando o agendador do FreeRTOS.

## Estrutura do Código

- **`init()`**: Configura os pinos GPIO dos LEDs como saída.
- **`vBlinkTask()`**: Função de tarefa que controla o piscar de um LED.
- **`main()`**: Inicializa o hardware, cria as tarefas e inicia o agendador do FreeRTOS.

## Requisitos

- Placa Raspberry Pi Pico.
- FreeRTOS configurado para o ambiente de desenvolvimento.
- LEDs conectados aos pinos GPIO 11 (verde) e 13 (vermelho).

## Como Executar

1. Configure o ambiente de desenvolvimento para o Raspberry Pi Pico com suporte ao FreeRTOS.
2. Compile o código `projeto-led-FreeRTOS.c`.
3. Carregue o binário gerado na placa Raspberry Pi Pico.
4. Conecte os LEDs aos pinos GPIO especificados.
5. Observe os LEDs piscando alternadamente.
