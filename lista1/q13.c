// Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo é que a variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores após a efetivação do processamento da troca.

#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);
    
    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("Antes da conversão:\n");
    printf("A = %d | B = %d\n", a, b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("Depois da conversão:\n");
    printf("A = %d | B = %d\n", a , b);
    
    return 0;
}