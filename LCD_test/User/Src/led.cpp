//
// Created by 86199 on 2022/9/30.
//
#include "led.h"

//class LED_Show{
//public:
//    void running_water_led(){
//        printf("Running Water LED Starting!\r\n");
//        if(running_water_led_cmd){
//            for(int i = 0; i < 10; i++){
//                HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
//                HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
//                HAL_Delay(500);
//                HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
//                HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
//                HAL_Delay(500);
//            }
//        }
//    }
//public:
//    int running_water_led_cmd = 0;
//};

void running_water_led(void){
    printf("Running Water LED Starting!\r\n");
    for(int i = 0; i < 10; i++){
        HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
        HAL_Delay(500);
        HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
        HAL_Delay(500);
    }
}

