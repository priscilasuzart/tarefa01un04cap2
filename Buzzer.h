#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"


#define BUZZER 21// Define o pino do buzzer


void liga_BUZZER() {
        gpio_init(BUZZER);
        gpio_set_dir(BUZZER, GPIO_OUT);
            
        gpio_put(BUZZER, 1); //Liga o buzzer
               
}


void desliga_BUZZER(){
        gpio_init(BUZZER);
        gpio_set_dir(BUZZER, GPIO_OUT);  
        
        gpio_put(BUZZER, 0); // Desliga o buzzer
                
}
