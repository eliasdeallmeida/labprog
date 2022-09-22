// Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de 15 a 90.

#include <stdio.h>
#include <math.h>

int main(void){
    int quadrado;
    
    for(int n = 15; n <= 90; n++){
        if(n % 4 == 0){
            quadrado = pow(n, 2);
            printf("%d^2 = %d\n", n, quadrado);
        }
    }
    
    return 0;
}