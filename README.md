# Tarefa 1 - Unidade 4 -Atividade 1 - Microcontroladores - GPIO

Objetivo:  
Este projeto utiliza um teclado matricial 4x4 conectado a um Raspberry Pi Pico W para controlar LEDs RGB e um buzzer. As teclas do teclado realizam diferentes combinações de LEDs e o acionamento do buzzer.

Funcionalidades:  
O programa detecta qual tecla do teclado matricial foi pressionada e realiza as seguintes ações:  
Tecla A: acende o LED vermelho  
Tecla B: acende o LED azul  
Tecla C: acende o LED verde  
Tecla D: acende todos os LEDs  
Tecla #: aciona o buzzer  
Tecla 1: acende os LEDs azul e verde  
Tecla 2: acende os LEDS vermelho e verde  
Tecla 3: acende os LEDS vermelho e azul  
OBS:      
1) Para o correto funcionamento, a tecla escolhida deverá ser mantida pressionada. Será imprimido no terminal qual a tecla que está pressionada;
2) Caso não seja pressionada nenhuma tecla, ficará sendo apresentado no terminal a mensagem "Nenhuma tecla pressionada" até que seja pressionada alguma.  

Componentes necessários:
1) Teclado matricial 4x4
2) 03 LEDs – tipo RGB
3) Componente Buzzer
4) Microcontrolador Raspberry Pi Pico W

Conexões utilizadas no Raspberry Pi Pico W (pinos usados):
1) Teclado Matricial:  
     Linhas: GPIO 1, 2, 3, 4  
     Colunas: GPIO 5, 6, 7, 8
2) LEDs:  
     Verde: GPIO 11;  
     Azul: GPIO 12 ;  
     Vermelho: GPIO 13
3) Buzzer: GPIO 21

Exemplo de execução:  
Entrada: Usuário pressiona a tecla ‘A’  
Saída: o LED vermelho, conectado ao GPIO 13, é aceso  

Link para o vídeo ensaio (abrir com Windows Media Player Legacy):     
https://drive.google.com/file/d/1I9j8FmdnCwW6t41Wdh715rhSN2-4aVkC/view?usp=sharing 


Projeto desenvolvido por:   
Anna Luiza Rocha Neves  
Camile Vitória Lino dos Santos  
Daniel Lucas Rios da Silva  
Erick Patrick Pontes Chagas  
João Marcelo Nascimento Fernandes  
João Pedro Soares Raccolto  
Priscila Pereira Suzart de Carvalho (líder)  
Rogério Ramos Coelho de Sousa  
Ryan Farias Vieira

