#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_VERDE 11
#define LED_AZUL 12


void liga_azulVerde() { // Função para ligar o led azul e verde

        gpio_init(LED_VERDE);
        gpio_set_dir(LED_VERDE, GPIO_OUT);
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);
        while (1) {
                gpio_put(LED_VERDE, 1);
                gpio_put(LED_AZUL, 1);
                
        }
}

void desliga_azulVerde() {

        gpio_init(LED_VERDE);
        gpio_set_dir(LED_VERDE, GPIO_OUT);
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);
        while (1) {
                gpio_put(LED_VERDE, 0);
                gpio_put(LED_AZUL, 0);
                
        }
}