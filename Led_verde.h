#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define led_pin_verde 11

void ligarledverde() {

    gpio_init(led_pin_verde);
    gpio_set_dir(led_pin_verde, GPIO_OUT);
    
    gpio_put(led_pin_verde, 1);
    
}

void desligarledverde() {

    
    
    gpio_put(led_pin_verde,0);
    
    
}