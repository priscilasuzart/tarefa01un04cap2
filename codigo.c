#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "Led_vermelho.h"
#include "Led_Azul.h"
#include "Buzzer.h"
#include "Todos_Leds.h"
#include "Led_AzulVerde.h"
#include "Led_VerdeVermelho.h"
#include "Led_AzulVermelho.h"
#include "Led_verde.h"


#define LED_VERDE 11 // Pino do LED verde
#define LED_AZUL 12 // Pino do LED azul
#define LED_VERMELHO 13 // Pino do LED vermelho
#define BUZZER 21 // Pino do buzzer

uint linhas[4] = {1,2,3,4}; // Pinos das linhas do teclado matricial
uint colunas[4] = {5,6,7,8}; // Pinos das colunas do teclado matricial


///Matriz para mapear as teclas do teclado matricial 4x4 para os caracteres correspondentes a cada tecla pressionada (0-9, A-D, *, #)  
char MAPA_TECLAS[4][4] = { 
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'
};

//Função para inicializar os GPIOs do teclado matricial
void inicia_teclado() {
    for (int i = 0; i < 4; i++){ //Repete o bloco de código para os valores de i começando de 0 até 3 (inclusive), incrementando i em 1 a cada iteração
        gpio_init(linhas[i]); //Inicializa o pino GPIO especificado no índice i do array linhas
        gpio_set_dir(linhas[i], GPIO_OUT); //Configuração do modo de operação (direção) do pino GPIO indicado por linhas[i] como uma saída digital
    }
    for (int i = 0; i < 4; i++){ //Repete o bloco de código para os valores de i começando de 0 até 3 (inclusive), incrementando i em 1 a cada iteração
        gpio_init(colunas[i]); //Inicializa o pino GPIO especificado no índice i do array colunas
        gpio_set_dir(colunas[i], GPIO_IN); //Configuração do modo de operação (direção) do pino GPIO indicado por linhas[i] como uma entrada
        gpio_pull_down(colunas[i]); //Ativa resistor de pull-down, quando nenhuma tecla estiver pressionada, o valor lido no pino será "0" (baixo)
    } 
}

//Função para ler o teclado matricial (verifica se alguma tecla foi pressionada)
char ler_teclado(){ //Declara a função chamada ler_teclado que retorna um valor do tipo char, a tecla pressionada
    for (int i = 0; i < 4; i++){ //Repete o bloco de código para os valores de i começando de 0 até 3 (inclusive), incrementando i em 1 a cada iteração
        gpio_put(linhas[i], 1); //Ativa a linha ( valor de 1 (ou HIGH) está sendo enviado para o pino GPIO especificado no índice i da array linhas)
        for (int j = 0; j < 4; j++){ //Repete o bloco de código para os valores de j começando de 0 até 3 (inclusive), incrementando j em 1 a cada iteração
    if (gpio_get(colunas[j])){ //Verifica se a coluna foi ativada
        gpio_put(linhas[i],0); //Desativa a linha (valor de 0 (ou LOW) está sendo enviado para o pino GPIO especificado no índice i da array linhas)
        sleep_ms(50); // Debounce (Espera 50 milissegundos para garantir que o sinal seja estável, evitando leituras falsas)
        return MAPA_TECLAS[i][j]; //Retorna a tecla pressionada
    }
 }
 gpio_put(linhas[i],0); ////Desativa a linha (valor de 0 (ou LOW) está sendo enviado para o pino GPIO especificado no índice i da array linhas)
    }
    return '\0'; //Retorna '\0' se nenhuma tecla foi pressionada
}

// Função para desligar todos os LEDs e o buzzer





int main()
{
    stdio_init_all();
    inicia_teclado();

        while (1) {
        char tecla = ler_teclado();
        

        switch(tecla){
                


            case 'A':
            liga_BOTAO_A ();
            printf("Botão A pressionado\n");
            break;

            case 'B':
            liga_BOTAO_B();
            printf("Botão B pressionado\n");
            break;

            case 'C':
            ligarledverde();
            printf("Botão C pressionado\n");
            break;
                       
            case 'D':
            ligarLeds();
            printf("Botão D pressionado\n");
            break;

            case '#':
            liga_BUZZER();
            printf("Botão # pressionado\n");
            break;

            case '1':
            liga_azulVerde();
            printf("Botão 1 pressionado\n");
            break;

            case '2':
            liga_VermelhoVerde();
            printf("Botão 2 pressionado\n");
            break;

            case '3':
            tecla3_liga();
            printf("Botão 3 pressionado\n");
            break;           

            case '\0':
            desligarLeds();
            printf("Nenhuma tecla pressionada\n");
            break;

            default:
            break;
        }
        sleep_ms(1000);
    }
}
