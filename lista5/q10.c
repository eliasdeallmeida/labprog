/*
Escreva um programa que gere dois vetores (X e Y) com números pseudoaleatórios
no intervalo [0, N−1]. Crie uma matriz M com dimensões NxN que armazene as
coocorrências dos elementos de X e Y da seguinte forma:

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

void alocarPonteiro(int**, int);
void sortearVetor(int*, int, int);
void contarOcorrencias(int*, int*, int*, int, int);
void imprimirVetor(int*, int);
void imprimirMatriz(int*, int);

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("ERRO: Digite %s <tamanho do vetor> <valor máximo para sortear>\n", argv[0]);
        exit(1);
    }

    int *x = NULL;
    int *y = NULL;
    int *m = NULL;
    int tam = atoi(argv[1]);
    int n = atoi(argv[2]);

    srand(time(NULL));

    alocarPonteiro(&x, tam);
    alocarPonteiro(&y, tam);
    alocarPonteiro(&m, n * n);

    sortearVetor(x, tam, n);
    sortearVetor(y, tam, n);
    contarOcorrencias(x, y, m, n, tam);

    printf("\nVetor X\n");
    imprimirVetor(x, tam);

    printf("\nVetor Y\n");
    imprimirVetor(y, tam);

    printf("\nContador de ocorrências\n");
    imprimirMatriz(m, n);

    free(x);
    free(y);
    free(m);

    return 0;
}

void alocarPonteiro(int **ptr, int tam){
    *ptr = malloc(tam * sizeof(int));
    if(!(*ptr)){
        printf("ERRO: Memória insuficiente para alocação do ponteiro!\n");
        exit(2);
    }
}

void sortearVetor(int *vetor, int tam, int max){
    for(int i = 0; i < tam; i++){
        *(vetor + i) = rand() % max;
    }
}

void contarOcorrencias(int *px, int *py, int *m, int n, int tam){
    int x, y;
    for(int i = 0; i < tam; i++){
        x = *(px + i);
        y = *(py + i);
        *(m + n * x + y) += 1;
    }
}

void imprimirVetor(int *vetor, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(vetor + i));
    }
    printf("]\n");
}

void imprimirMatriz(int *matriz, int n) {
    for(int i = 0; i < n * n; i++){
        if(!(i % n)){
            printf("|");
        }
        printf(" %d ", *(matriz + i));
        if(!((i + 1) % n)){
            printf("|\n");
        }
    }
}