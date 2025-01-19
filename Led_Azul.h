#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_AZUL 12

void liga_BOTAO_B() {
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);
              
        gpio_put(LED_AZUL, 1); //Liga o LED azul
        
}


void desliga_BOTAO_B(){
        gpio_init(LED_AZUL);
        gpio_set_dir(LED_AZUL, GPIO_OUT);  
         
        gpio_put(LED_AZUL, 0); // Desliga o LED azul
                
}