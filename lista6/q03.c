// Escreva um programa em C que gere um vetor com números aleatórios e calcule sua média. Organize uma Estrutura com as seguintes informações: ponteiro para a matriz, quantidade de elemento e a média.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

typedef struct{
    int *valores;
    int tam;
    float media;
}vetor;

void alocarVetor(int**, int);
void sortearVetor(int*, int);
void calcularMediaVetor(vetor*);
void imprimirVetor(int*, int);

int main(void){
    vetor v;
    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &v.tam);

    alocarVetor(&v.valores, v.tam);
    sortearVetor(v.valores, v.tam);
    calcularMediaVetor(&v);
    
    printf("Vetor Sorteado:\n");
    imprimirVetor(v.valores, v.tam);
    printf("A média dos valores do vetor vale %.2f\n", v.media);

    free(v.valores);
    
    return 0;
}

void alocarVetor(int **vetor, int tam){
    *vetor = malloc(tam * sizeof(int));
    if(!*vetor){
        printf("ERRO: Memória insuficiente para alocação do vetor!\n");
        exit(1);
    }
}

void sortearVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        *(vetor + i) = rand() % MAX;
    }
}

void calcularMediaVetor(vetor *v){
    int soma = 0;
    for(int i = 0; i < v->tam; i++){
        soma += v->valores[i];
    }
    v->media = (float) soma / v->tam;
}

void imprimirVetor(int *vetor, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", *(vetor + i));
    }
    printf("]\n");
}