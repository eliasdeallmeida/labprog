// Modifique a questão anterior criando uma função que armazena em um vetor os enderecos do menor e do maior elemento do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define INDEX_MAIOR 0
#define INDEX_MENOR 1

void alocarVetor(int**, int);
void alocarVetorEnderecos(int***, int);
void sortearVetor(int*, int);
void procurarMaiorValor(int**, int*, int);
void procurarMenorValor(int**, int*, int);
void imprimirVetor(int*, int);

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("ERRO: Digite %s <tamanho do vetor>\n", argv[0]);
        exit(1);
    }

    int **enderecos = NULL;
    int *vetor = NULL;
    int tam = atoi(argv[1]);
    
    srand(time(NULL));
    
    alocarVetorEnderecos(&enderecos, 2);
    alocarVetor(&vetor, tam);
    
    sortearVetor(vetor, tam);
    procurarMaiorValor((enderecos + INDEX_MAIOR), vetor, tam);
    procurarMenorValor((enderecos + INDEX_MENOR), vetor, tam);
    
    printf("Vetor sorteado:\n");
    imprimirVetor(vetor, tam);
    
    printf("O endereço do maior valor é [%p]\n", *(enderecos + INDEX_MAIOR));
    printf("O endereço do menor valor é [%p]\n", *(enderecos + INDEX_MENOR));

    free(enderecos);
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

void alocarVetorEnderecos(int ***pVetorEnderecos, int tam){
    *pVetorEnderecos = malloc(tam * sizeof(int*));
    if(!*pVetorEnderecos){
        printf("ERRO: Memória insuficiente para alocação do ponteiro!\n");
        exit(3);
    }
}

void sortearVetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        *(vetor + i) = rand() % MAX;
    }
}

void procurarMaiorValor(int **maior, int *vetor, int tam){
    *maior = vetor;
    for(int i = 0; i < tam; i++){
        *maior = (*(vetor + i) > **maior)? (vetor + i) : *maior;
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