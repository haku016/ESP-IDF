#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_system.h"

#define LED_GPIO GPIO_NUM_2

void app_main(void){
    gpio_set_direction(LED_GPIO,GPIO_MODE_OUTPUT);

    while(1){
        gpio_set_level(LED_GPIO,1);
        vTaskDelay(2000/portTICK_PERIOD_MS);
        gpio_set_level(LED_GPIO,0);
        vTaskDelay(2000/portTICK_PERIOD_MS);
    }

}