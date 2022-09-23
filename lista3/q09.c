// Faça um programa que leia uma matriz bidimensional do usuário, de dimensão 3x3, e apresente os elementos da diagonal principal.

#include <stdio.h>

#define TAM 3

int main(void){
    int i, j, matriz[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
        printf("a(%d%d) = ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
        }
    }

    puts("Matriz formada:");
    for(i = 0; i < TAM; i++){
        printf("|");
        for(j = 0; j < TAM; j++){
            printf(" %3d ", matriz[i][j]);
        }
        printf("|\n");
    }

    printf("Elementos da matriz principal: ");
    for(i = 0; i < TAM; i++){
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    
    return 0;
}