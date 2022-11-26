// Escreva um programa em C que informe o endereço do menor elemento de um vetor de inteiros gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void alocarVetor(int**, int);
void sortearVetor(int*, int);
void procurarMenorValor(int**, int*, int);
void imprimirVetor(int*, int);

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("ERRO: Digite %s <tamanho do vetor>\n", argv[0]);
        exit(1);
    }

    int **menor = NULL;
    int *vetor = NULL;
    int tam = atoi(argv[1]);
    
    srand(time(NULL));

    menor = malloc(sizeof(int));
    alocarVetor(&vetor, tam);
    sortearVetor(vetor, tam);
    procurarMenorValor(menor, vetor, tam);
    
    printf("Vetor sorteado:\n");
    imprimirVetor(vetor, tam);
    printf("O endereço do menor valor é [%p]\n", *menor);

    free(menor);
    free(vetor);
    
    return 0;
}

void alocarVetor(int **pVetor, int tam){
    *pVetor = malloc(tam * sizeof(int));
    if(!*pVetor){
        printf("ERRO: Memória insuficiente para alocação do vetor!\n");
        exit(2);
    }
}

void sortearVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        *(vetor + i) = rand() % MAX;
    }
}

void procurarMenorValor(int **menor, int *vetor, int tam){
    *menor = vetor;
    for(int i = 0; i < tam; i++){
        *menor = (*(vetor + i) < **menor)? (vetor + i) : *menor;
    }
}

void imprimirVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        printf("[%p] %d\n", (vetor + i), *(vetor + i));
    }
}