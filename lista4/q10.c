/*
Escreva um programa que gere um vetor X com números pseudoaleatórios no intervalo [0, N−1].
Crie um vetor F com N posições e armazene em cada posição de F a quantidade de ocorrências dos elementos de X. Exemplo:

Para N = 7, temos:
X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]

Portanto:
F = [2, 0, 4, 2, 1, 3, 2]

Observe que as ocorrências dos elementos de X são armazenadas em F nos índices de mesmo valor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void sorteiaValores(int*, int, int);
void contaValores(int*, int*, int, int);
void imprimeVetor(int*, int);

int main(void){
    int x[TAM], *f, n;
    srand(time(NULL));

    printf("Limite dos valores sorteados: ");
    scanf("%d", &n);

    f = malloc(n * sizeof(int));
    sorteiaValores(x, TAM, n);
    contaValores(x, f, TAM, n);

    printf("\nVetor sorteado\n");
    imprimeVetor(x, TAM);
    
    printf("\nFrequência dos números\n");
    imprimeVetor(f, n);

    free(f);
    
    return 0;
}

void sorteiaValores(int *vet, int tam, int n){
    for(int i = 0; i < tam; i++){
        *(vet + i) = rand() % n;
    }
}

void contaValores(int *vet, int *f, int tam, int n){
    int cont, termoAtual = 0;
    for(int i = 0; i < n; i++){
        cont = 0;
        for(int j = 0; j < tam; j++){
            if(vet[j] == termoAtual){
                cont++;
            }
        }
        f[i] = cont;
        termoAtual++;
    }
}

void imprimeVetor(int *vet, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(vet + i));
    }
    printf("]\n");
}