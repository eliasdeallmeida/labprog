// Dados dois vetores A e B de tamanho N, M, respectivamente. Desenvolva um programa que apresente C dado que C = A ∩ B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarVetor(int*, int);
int *realocarVetor(int*, int);
void sortearVetor(int*, int, int);
void verificarSeValorEstaNoVetor(int*, int, int*, int);
int *fazerIntercessao(int*, int*, int*, int, int, int*);
void imprimirVetor(int*, int);

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("ERRO: Digite '%s <tamanho do vetorA> <tamanho do vetorB> <limite dos valores sorteados>'\n", argv[0]);
        exit(1);
    }
    if(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0 || atoi(argv[3]) <= 0){
        printf("ERRO: Informe valores maiores que zero!\n");
        exit(2);
    }

    int *vetorA = NULL;
    int *vetorB = NULL;
    int *intercessao = NULL;
    int tamVetorA = atoi(argv[1]);
    int tamVetorB = atoi(argv[2]);
    int tamIntercessao = atoi(argv[3]);
    int valorMax = atoi(argv[3]);
    
    srand(time(NULL));
    
    vetorA = alocarVetor(vetorA, tamVetorA);
    vetorB = alocarVetor(vetorB, tamVetorB);
    intercessao = alocarVetor(intercessao, tamIntercessao);
    
    sortearVetor(vetorA, tamVetorA, valorMax);
    sortearVetor(vetorB, tamVetorB, valorMax);
    intercessao = fazerIntercessao(vetorA, vetorB, intercessao, tamVetorA, tamVetorB, &tamIntercessao);
    intercessao = realocarVetor(intercessao, tamIntercessao);

    printf("\nVetores sorteados\n");
    imprimirVetor(vetorA, tamVetorA);
    imprimirVetor(vetorB, tamVetorB);
    
    printf("\nIntercessão de vetores\n");
    imprimirVetor(intercessao, tamIntercessao);

    free(vetorA);
    free(vetorB);
    free(intercessao);
    
    return 0;
}

int *alocarVetor(int *vetor, int tamVetor){
    vetor = malloc(tamVetor * sizeof(int));
    if(!vetor){
        printf("\nERRO: Memória insuficiente para alocação do vetor!\n");
        exit(3);
    }
    return vetor;
}

int *realocarVetor(int *vetor, int novoTamVetor){
    vetor = realloc(vetor, novoTamVetor *sizeof(int));
    if(!vetor){
        printf("\nERRO: Memória insuficiente para realocação do vetor!\n");
        exit(4);
    }
    return vetor;
}

void sortearVetor(int *vetor, int tamVetor, int valorMax){
    for(int i = 0; i < tamVetor; i++){
        *(vetor + i) = rand() % valorMax;
    }
}

void verificarSeValorEstaNoVetor(int *valorEstaContido, int valor, int *vetor, int tamVetor){
    *valorEstaContido = 0;
    for(int i = 0; i < tamVetor; i++){
        if(valor == *(vetor + i)){
            *valorEstaContido += 1;
            break;
        }
    }
}

int *fazerIntercessao(int *vetorA, int *vetorB, int *intercessao, int tamVetorA, int tamVetorB, int *tamIntercessao){
    int valorEstaContido, posicaoAtual = 0;
    for(int i = 0; i < tamVetorA; i++){
        for(int j = 0; j < tamVetorB; j++){
            if(*(vetorA + i) == *(vetorB + j)){
                verificarSeValorEstaNoVetor(&valorEstaContido, *(vetorA + i), intercessao, posicaoAtual);
                if(!valorEstaContido){
                    *(intercessao + posicaoAtual) = *(vetorA + i);
                    posicaoAtual++;
                }
            }
        }
    }
    *tamIntercessao = posicaoAtual;
    return intercessao;
}

void imprimirVetor(int *vetor, int tamVetor){
    printf("[");
    for(int i = 0; i < tamVetor; i++){
        printf(" %d ", *(vetor + i));
    }
    printf("]\n");
}