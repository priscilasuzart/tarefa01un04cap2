#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_VERDE 11
#define LED_VERMELHO 13


void liga_VermelhoVerde() { // Função para ligar o LED Verde e Vermelho

        gpio_init(LED_VERDE);
        gpio_set_dir(LED_VERDE, GPIO_OUT);
        gpio_init(LED_VERMELHO);
        gpio_set_dir(LED_VERMELHO, GPIO_OUT);
        
        gpio_put(LED_VERDE, 1);
        gpio_put(LED_VERMELHO, 1);
                
        
}

void desliga_VermelhoVerde() { // Função para desligar o LED Verde e Vermelho

        
        
        gpio_put(LED_VERDE, 0);
        gpio_put(LED_VERMELHO, 0);
                
        
}