#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"


void tecla3_liga(){
  gpio_init(LED_VERDE);
  gpio_init(LED_VERMELHO);
  gpio_init(LED_AZUL);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_put(LED_AZUL, 1);    
  gpio_put(LED_VERMELHO, 1); 
  gpio_put(LED_VERDE, 0);
}
  
void tecla3_desliga(){
  gpio_init(LED_VERDE);
  gpio_init(LED_VERMELHO);
  gpio_init(LED_AZUL);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_put(LED_AZUL, 0);    
  gpio_put(LED_VERMELHO, 0); 
  gpio_put(LED_VERDE, 0);
}