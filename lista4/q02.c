// Escreva um programa que troque o valor de dois números utilizando ponteiros

#include <stdio.h>

void trocaValores(int *px, int *py);

int main(void){
    int x, y;

    printf("Valor de x: ");
    scanf("%d", &x);
    printf("Valor de B: ");
    scanf("%d", &y);

    puts("Antes da inversão");
    printf("x = %d | y = %d\n", x, y);

    trocaValores(&x, &y);
    
    puts("Depois da inversão");
    printf("x = %d | y = %d\n", x, y);
    
    return 0;
}

void trocaValores(int *px, int *py){
    *px ^= *py;
    *py ^= *px;
    *px ^= *py;
}