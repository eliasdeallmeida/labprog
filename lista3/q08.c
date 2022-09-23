// Faça um programa em C que gere um vetor com 100 números inteiros pseudoaleatórios no intervalo definido pelo usuário e apresente esse vetor ordenado (crescente). Faça uma versão com o método de ordenação por seleção e outra pelo método bolha (bubble sort).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void){
    int i, j, min, max, menor, num[TAM];

    printf("Digite o valor mínimo: ");
    scanf("%d", &min);
    printf("Digite o valor máximo: ");
    scanf("%d", &max);

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        num[i] = rand() % max + min;
        printf("%dº número = %d\n", i+1, num[i]);
    }

    printf("\nSelection Sort:\n");
    for(i = 0; i < TAM-1; i++){
        menor = i;
        for(j = i+1; j < TAM; j++){
            if(num[menor] > num[j])
                menor = j;
        }
        if(i != menor){
            num[i] ^= num[menor];
            num[menor] ^= num[i];
            num[i] ^= num[menor];
        }
    }
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("\nBubble Sort:\n");
    for(i = 0; i < TAM-1; i++){
        for(j = i+1; j < TAM; j++){
            if(num[i] > num[j]){
                num[i] ^= num[j];
                num[j] ^= num[i];
                num[i] ^= num[j];
            }
        }
    }
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    
    return 0;
}