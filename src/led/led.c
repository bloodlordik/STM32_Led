#include "led.h"
uint16_t delay = 500;

void LedBlinck(void){
    HAL_GPIO_WritePin(LED_GPIO_PORT, LED_PIN, GPIO_PIN_SET );
}