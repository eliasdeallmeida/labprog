// Faça um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do menor e maior elemento do vetor fornecido.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MAX 10

int main(void){
    float maior, menor, soma, valor[TAM];

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        valor[i] = rand() / (float)RAND_MAX * MAX;
        if(i == 0)
            maior = menor = valor[i];
        maior = (valor[i] > maior)? valor[i] : maior;
        menor = (valor[i] < menor)? valor[i] : menor;
        printf("%dº número = %.2f\n", i+1, valor[i]);
    }

    soma = maior + menor;
    printf("O maior valor é %.2f e o menor valor é %.2f e a soma entre eles vale %.2f\n", maior, menor, soma);

    return 0;
}