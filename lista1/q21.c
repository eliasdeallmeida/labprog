// Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. Obs.: Não utilizar estrutura de decisão if.

#include <stdio.h>

int main(void){
    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite outro número: ");
    scanf("%d", &y);

    (x % y)? printf("%d não é múltiplo de %d\n", x, y) : printf("%d é múltiplo de %d\n", x, y);
    
    return 0;
}