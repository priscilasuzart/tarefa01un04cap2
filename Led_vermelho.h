#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"



#define LED_VERMELHO 13// Define o pino do led vermelho


void liga_BOTAO_A () {
        gpio_init(LED_VERMELHO);
        gpio_set_dir(LED_VERMELHO, GPIO_OUT);
              
        gpio_put(LED_VERMELHO, 1); //Liga o LED vermelho
          
}


void desliga_BOTAO_A(){
        
        gpio_put(LED_VERMELHO, 0); // Desliga o LED vermelho
                
}

               