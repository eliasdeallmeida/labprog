// Faça um programa em C que gere um vetor com 3 números inteiros pseudoaleatórios no intervalo [0, 19] e apresente a sua média aritmética e geométrica.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 20

int main(void){
    int num[TAM], soma, produto;
    float ma, mg;

    soma = ma = 0;
    produto = mg = 1;

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        num[i] = rand() % MAX;
        soma += num[i];
        produto *= num[i];
        printf("%dº valor = %d\n", i+1, num[i]);
    }

    ma = (float)soma / TAM;
    mg = pow(produto, (float)1/TAM);

    printf("Média aritmética = %.2f\n", ma);
    printf("Média geométrica = %.2f\n", mg);
    
    return 0;
}