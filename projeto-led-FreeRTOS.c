#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
#include "pico/stdlib.h"

const uint GREEN_LED = 11;
const uint RED_LED = 13;

void init()
{
    gpio_init(GREEN_LED);
    gpio_init(RED_LED);

    gpio_set_dir(GREEN_LED, GPIO_OUT);
    gpio_set_dir(RED_LED, GPIO_OUT);
}

void vBlinkTask(void *pvParamters)
{
    uint *led = (uint *)pvParamters;
    for (;;)
    {
        gpio_put(*led, 1);

        vTaskDelay(250 / portTICK_PERIOD_MS);

        gpio_put(*led, 0);
        vTaskDelay(250 / portTICK_PERIOD_MS);
    }
}

int main()
{
    init();

    xTaskCreate(vBlinkTask, "Blink Task", 128, (void *)&GREEN_LED, 1, NULL);
    xTaskCreate(vBlinkTask, "Blink Task 2", 128, (void *)&RED_LED, 1, NULL);
    vTaskStartScheduler();

    for (;;)
    {
        }
}