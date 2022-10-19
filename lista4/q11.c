/*
Escreva um programa que gere dois vetores (X e Y) com números pseudoaleatórios no intervalo [0, N−1]. Crie uma matriz M com dimensões NxN que armazene as coocorrências dos elementos
de X e Y da seguinte forma:

Por exemplo, para N = 7:

X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
Y = [3, 6, 2, 1, 0, 2, 1, 3, 5, 5, 3, 4, 1, 5]

Portanto, M = 0 0 1 0 0 0 0
              2 0 0 1 0 0 0
              0 0 1 1 0 0 0
              0 0 2 0 1 0 1
              0 0 0 0 0 0 0
              0 0 0 0 0 3 0
              0 0 0 0 0 0 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void sorteiaVetor(int*, int, int);
void contaOcorrencias(int*, int*, int*, int, int);
void imprimeVetor(int*, int);
void imprimeMatriz(int*, int);

int main(void){
    int x[TAM], y[TAM], *m, n;
    srand(time(NULL));

    printf("Limite dos valores sorteados: ");
    scanf("%d", &n);

    m = calloc(n*n, sizeof(int));
    sorteiaVetor(x, n, TAM);
    sorteiaVetor(y, n, TAM);
    contaOcorrencias(x, y, m, n, TAM);

    printf("\nVetor X\n");
    imprimeVetor(x, TAM);
    
    printf("\nVetor Y\n");
    imprimeVetor(y, TAM);

    printf("\nContador de ocorrências\n");
    imprimeMatriz(m, n);

    free(m);
    
    return 0;
}

void sorteiaVetor(int *pv, int max, int tam){
    for(int i = 0; i < tam; i++){
        *(pv + i) = rand() % max;
    }
}

void contaOcorrencias(int *px, int *py, int *m, int n, int tam){
    int x, y;
    for(int i = 0; i < tam; i++){
        x = *(px + i);
        y = *(py + i);
        *(m + n * x + y) += 1;
    }
}

void imprimeVetor(int *pv, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(pv + i));
    }
    printf("]\n");
}

void imprimeMatriz(int *m, int n){
    printf("|");
    for(int i = 0; i < n*n; i++){
        printf(" %2d ", *(m + i));
        if(!((i + 1) % n)){
            if(i == n*n-1){
                printf("|\n");
            }else{
                printf("|\n|");
            }
        }
    }
}