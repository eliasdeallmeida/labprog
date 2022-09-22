// Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o operador –.

#include <stdio.h>

int main(void){
    int x = 10;

    printf("O x inicialmente vale %d\n", x);
    printf("O valor de x com pós-incremento nessa mensagem vale %d\n", x--);
    printf("Agora x é %d\n", x);
    printf("O valor de x com pré-incremento nessa mensagem vale %d\n", --x);
    printf("Agora x é %d\n", x);
    
    return 0;
}