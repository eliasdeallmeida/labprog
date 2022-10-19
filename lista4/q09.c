// Implemente o método de ordenação bolha utilizando ponteiros.

#include <stdio.h>

#define TAM 5

void limpaBuffer();
void recebeVetor(int*, int);
void imprimeVetor(int*, int);
void ordenaVetor(int*, int);

int main(void){
    int vet[TAM];

    recebeVetor(vet, TAM);
    
    printf("\nAntes da ordenação\n");
    imprimeVetor(vet, TAM);

    ordenaVetor(vet, TAM);
    printf("\nDepois da ordenação\n");
    imprimeVetor(vet, TAM);
    
    return 0;
}

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

void recebeVetor(int *vet, int tam){
    printf("\nInforme a vetor\n");
    for(int i = 0; i < tam; i++){
        printf("%dº valor = ", i+1);
        scanf("%d", (vet + i));
        limpaBuffer();
    }
}

void ordenaVetor(int *vet, int tam){
    for(int i = 0; i < tam-1; i++){
        for(int j = i+1; j < tam; j++){
            if(*(vet + j) < *(vet + i)){
                *(vet + i) ^= *(vet + j);
                *(vet + j) ^= *(vet + i);
                *(vet + i) ^= *(vet + j);
            }
        }
    }
}

void imprimeVetor(int *vet, int tam){
    printf("[");
    for(int i = 0; i < tam; i++)
        printf(" %d ", *(vet + i));
    printf("]\n");
}