#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13

void tecla3_liga(){
  
  gpio_init(LED_VERMELHO);
  gpio_init(LED_AZUL);
  
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
    
  gpio_put(LED_AZUL, 1);    
  gpio_put(LED_VERMELHO, 1); 
  
  
}

  
void tecla3_desliga(){
  
  gpio_put(LED_AZUL, 0);    
  gpio_put(LED_VERMELHO, 0); 
  
  
}