// Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste o vetor com tipos de dados diferentes, analise os endereços. O que você observou?

#include <stdio.h>

#define TAM 5

void limpaBuffer();

int main(void){
    int vet_i[TAM];
    float vet_f[TAM];
    double vet_d[TAM];
    char vet_c[TAM];

    // recebe os vetores
    for(int i = 0; i < TAM; i++){
        printf("int[%d] = ", i);
        scanf("%d", (vet_i + i));
        limpaBuffer();
    }
    printf("\n");
    
    for(int i = 0; i < TAM; i++){
        printf("float[%d] = ", i);
        scanf("%f", (vet_f + i));
    }
    printf("\n");
    
    for(int i = 0; i < TAM; i++){
        printf("double[%d] = ", i);
        scanf("%lf", (vet_d + i));
    }
    printf("\n");
    
    for(int i = 0; i < TAM; i++){
        limpaBuffer();
        printf("char[%d] = ", i);
        scanf(" %c", (vet_c + i));
    }
    printf("\n");

    // mostra os vetores
    printf("Vetor inteiro\n");
    for(int i = 0; i < TAM; i++){
        printf("%d [%p]\n", *(vet_i + i), (vet_i + i));
    }
    
    printf("\nVetor float\n");
    for(int i = 0; i < TAM; i++){
        printf("%f [%p]\n", *(vet_f + i), (vet_f + i));
    }
    
    printf("\nVetor double\n");
    for(int i = 0; i < TAM; i++){
        printf("%lf [%p]\n", *(vet_d + i), (vet_d + i));
    }
    
    printf("\nVetor char\n");
    for(int i = 0; i < TAM; i++){
        printf("%c [%p]\n", *(vet_c + i), (vet_c + i));
    }
    
    return 0;
}

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}