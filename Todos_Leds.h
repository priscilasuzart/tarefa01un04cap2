#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// Pinos para os LEDs RGB
#define LED_VERMELHO 10
#define LED_VERDE 11
#define LED_AZUL 12


//Aciona os LEDs vermelho, verde e azul simultaneamente. 
void ligarLeds() { 

        gpio_init(LED_VERMELHO);
        gpio_set_dir(LED_VERMELHO, GPIO_OUT);
        gpio_init(LED_VERDE);
        gpio_set_dir(LED_VERDE, GPIO_OUT);
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);
        while (1) {
                gpio_put(LED_VERMELHO, 1);
                gpio_put(LED_VERDE, 1);
                gpio_put(LED_AZUL, 1);
                
        }
}

//Desliga os LEDs vermelho, verde e azul simultaneamente.
void desligarLeds() {

        gpio_init(LED_VERMELHO);
        gpio_set_dir(LED_VERMELHO, GPIO_OUT);
        gpio_init(LED_VERDE);
        gpio_set_dir(LED_VERDE, GPIO_OUT);
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);
        while (1) {
                gpio_put(LED_VERMELHO, 0);
                gpio_put(LED_VERDE, 0);
                gpio_put(LED_AZUL, 0);
                
        }
}