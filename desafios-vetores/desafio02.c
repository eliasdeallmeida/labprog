// Escreva um programa que armazene os endereços de todas as ocorrências de um valor X em um vetor Y pseudo-aleatório. Se Y não tiver X, o vetor de endereços deve ser NULL. O valor X deve ser fornecido por linha de comando.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarVetor(int*, int);
void sortearVetor(int*, int, int);
void encontrarNumeroDeOcorrencias(int, int*, int, int*);
int **alocarPonteiroParaVetor(int**, int);
void preencherOcorrencias(int, int*, int, int**);
void imprimirVetor(int*, int);
void imprimirPonteiroParaVetor(int**, int);

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("ERRO: Digite '%s <valor x> <tamanho do vetor> <limite dos valores sorteados>'\n", argv[0]);
        exit(1);
    }
    if(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0 || atoi(argv[3]) <= 0){
        printf("ERRO: Informe valores maiores que zero!\n");
        exit(2);
    }

    int *vetorY = NULL;
    int **enderecosDasOcorrencias = NULL;
    int qtdOcorrencias = 0;
    int valorX = atoi(argv[1]);
    int tamVetorY = atoi(argv[2]);
    int valorMax = atoi(argv[3]);
    
    srand(time(NULL));

    vetorY = alocarVetor(vetorY, tamVetorY);
    sortearVetor(vetorY, tamVetorY, valorMax);
    
    encontrarNumeroDeOcorrencias(valorX, vetorY, tamVetorY, &qtdOcorrencias); 
    enderecosDasOcorrencias = alocarPonteiroParaVetor(enderecosDasOcorrencias, qtdOcorrencias);

    preencherOcorrencias(valorX, vetorY, tamVetorY, enderecosDasOcorrencias);
    
    printf("\nVetor Y\n");
    imprimirVetor(vetorY, tamVetorY);
    
    printf("\nEndereços das corrências do valor X no vetor Y\n");
    imprimirPonteiroParaVetor(enderecosDasOcorrencias, qtdOcorrencias);

    free(vetorY);
    free(enderecosDasOcorrencias);
    
    return 0;
}

int *alocarVetor(int *vetor, int tamVetor){
    vetor = calloc(tamVetor, sizeof(int));
    if(!vetor){
        printf("ERRO: Memória insuficiente para alocação do vetor!\n");
        exit(3);
    }
    return vetor;
}

void sortearVetor(int *vetor, int tamVetor, int valorMax){
    for(int i = 0; i < tamVetor; i++){
        *(vetor + i) = rand() % valorMax;
    }
}

void encontrarNumeroDeOcorrencias(int valor, int *vetor, int tamVetor, int *qtdOcorrencias){
    for(int i = 0; i < tamVetor; i++){
        *qtdOcorrencias += (*(vetor + i) == valor)? 1 : 0;
    }
}

int **alocarPonteiroParaVetor(int **ptrVetor, int tamPtrVetor){
    ptrVetor = calloc(1, sizeof(int*));
    *ptrVetor  = calloc(tamPtrVetor, sizeof(int));
    if(!ptrVetor){
        printf("ERRO: Memória insuficiente para alocação do ponteiro para vetor!\n");
        exit(4);
    }
    return ptrVetor;
}

void preencherOcorrencias(int valor, int *vetor, int tamVetor, int **enderecosDasOcorrencias){
    int posicaoAtual = 0;
    for(int i = 0; i < tamVetor; i++){
        if(*(vetor + i) == valor){
            *(enderecosDasOcorrencias + posicaoAtual) = (vetor + i);
            posicaoAtual++;
        }
    }
}

void imprimirVetor(int *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        printf("[%p] %d\n", (vetor + i), *(vetor + i));
    }
}

void imprimirPonteiroParaVetor(int **ptrVetor, int tamPtrVetor){
    for(int i = 0; i < tamPtrVetor; i++){
        printf("[%p] %d\n", *(ptrVetor + i), **(ptrVetor + i));
    }
}