/*
 * led_lib.c
 *
 *  Created on: Aug 16, 2024
 *      Author: 57316
 */

//#include "turn_signal.h"
//
//void turn_signal_left(void) {
//    static uint32_t turn_toggle_tick = 0;
//    static uint8_t blink_count = 0;  // Variable para contar el número de parpadeos
//    if (blink_count < 6) {  // Parpadea solo si no se han completado los tres parpadeos
//        if (turn_toggle_tick < HAL_GetTick()) {
//            turn_toggle_tick = HAL_GetTick() + 670;
//            HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
//            blink_count++;  // Incrementa el contador de parpadeos
//        }
//    }
//}
//
//void turn_signal_right(void) {
//    static uint32_t turn_toggle_tick = 0;
//    static uint8_t blink_count = 0;  // Variable para contar el número de parpadeos
//    if (blink_count < 6) {  // Parpadea solo si no se han completado los tres parpadeos
//        if (turn_toggle_tick < HAL_GetTick()) {
//            turn_toggle_tick = HAL_GetTick() + 670;
//            HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
//            blink_count++;  // Incrementa el contador de parpadeos
//        }
//    }
//}
//
//void turn_signal_hazard(void) {
//    static uint32_t turn_toggle_tick = 0;
//    static uint8_t blink_count = 0;  // Variable para contar el número de parpadeos
//    if (blink_count < 6) {  // Parpadea solo si no se han completado los tres parpadeos
//        if (turn_toggle_tick < HAL_GetTick()) {
//            turn_toggle_tick = HAL_GetTick() + 670;
//            HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
//            HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
//            HAL_GPIO_TogglePin(SP_GPIO_Port, SP_Pin);
//            blink_count++;  // Incrementa el contador de parpadeos
//        }
//    }
//}
