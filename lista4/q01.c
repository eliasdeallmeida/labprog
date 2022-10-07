// Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima também o endereço de memória onde o valor resultante dessa soma está armazenado.

#include <stdio.h>

void soma(int *x, int *y, int *s);

int main(void){
    int x, y, s;
        
    printf("Valor de x: ");
    scanf("%d", &x);
    printf("Valor de y: ");
    scanf("%d", &y);
        
    soma(&x, &y, &s);
    
    printf("%d [%p] + %d [%p] = %d [%p]\n", x, &x, y, &y, s, &s);
    
    return 0;
}

void soma(int *x, int *y, int *s){
    *s = *x + *y;
}