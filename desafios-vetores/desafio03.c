/*
Organize, em ordem crescente, um vetor de endereços que correspondente aos elementos de um vetor X.
Exemplo:
X = [20, 5, 7, 3, 15]
Supondo que o endereço do primeiro elemento de X seja 1000 e o último seja 1004, o vetor de endereços resultante é:
E = [1003, 1001, 1002, 1004, 1000]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int *alocarVetor(int*, int);
int **alocarPonteiroParaVetor(int**, int);
void sortearVetor(int*, int, int);
void preencherEnderecos(int**, int*, int);
void ordenarPonteiros(int**, int*, int);
void imprimirVetor(int*, int);
void imprimirPonteiroParaVetor(int**, int);

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("ERRO: Digite '%s <tamanho do vetor> <valor limite do sorteio>'\n", argv[0]);
        exit(1);
    }
    if(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0){
        printf("ERRO: Informe valores maiores que zero!\n");
        exit(2);
    }
    
    int *vetorSorteado = NULL;
    int **vetorEnderecos = NULL;
    int tamVetor = atoi(argv[1]);
    int valorMax = atoi(argv[2]);

    srand(time(NULL));
    
    vetorSorteado = alocarVetor(vetorSorteado, tamVetor);
    vetorEnderecos = alocarPonteiroParaVetor(vetorEnderecos, tamVetor);
    
    sortearVetor(vetorSorteado, tamVetor, valorMax);
    preencherEnderecos(vetorEnderecos, vetorSorteado, tamVetor);
    ordenarPonteiros(vetorEnderecos, vetorSorteado, tamVetor);
    
    printf("\nVetor Sorteado\n");
    imprimirVetor(vetorSorteado, tamVetor);
    
    printf("\nVetor de endereços em sequência\n");
    imprimirPonteiroParaVetor(vetorEnderecos, tamVetor);

    free(vetorSorteado);
    free(vetorEnderecos); 
    
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

int **alocarPonteiroParaVetor(int **ptrVetor, int tamPtrVetor){
    ptrVetor = calloc(1, sizeof(int*));
    *ptrVetor  = calloc(tamPtrVetor, sizeof(int));
    if(!ptrVetor){
        printf("ERRO: Memória insuficiente para alocação do ponteiro para vetor!\n");
        exit(4);
    }
    return ptrVetor;
}

void sortearVetor(int *vetor, int tamVetor, int valorMax){
    for(int i = 0; i < tamVetor; i++){
        *(vetor + i) = rand() % valorMax;
    }
}

void ordenarPonteiros(int **vetorEnderecos, int *vetor, int tamVetor){
    int *ptrAuxiliar;
    for(int i = 0; i < (tamVetor - 1); i++){
        for(int j = (i + 1); j < tamVetor; j++){
            if(**(vetorEnderecos + i) > **(vetorEnderecos + j)){
                ptrAuxiliar = *(vetorEnderecos + i);
                *(vetorEnderecos + i) = *(vetorEnderecos + j);
                *(vetorEnderecos + j) = ptrAuxiliar;
            }
        }
    }
}

void preencherEnderecos(int **ocorrencias, int *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        *(ocorrencias + i) = (vetor + i);
    }
}

void imprimirVetor(int *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        printf("[%p] %d\n", (vetor + i), *(vetor + i));
    }
}

void imprimirPonteiroParaVetor(int **ptrVetor, int tamPtrVetor){
    for(int j = 0; j < tamPtrVetor; j++){
        printf("[%p] %d\n", *(ptrVetor+j), **(ptrVetor  + j));
    }
}