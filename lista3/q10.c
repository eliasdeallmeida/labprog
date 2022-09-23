// Faça um programa que gere uma matriz bidimensional com elementos aleatórios e receba do usuário um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10

int main(void){
    int matriz[TAM][TAM], i, j, x, cont = 0;

    srand(time(NULL));
    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            matriz[i][j] = rand() % MAX;
        }
    }

    for(i = 0; i < TAM; i++){
        printf("|");
        for(j = 0; j < TAM; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("|\n");
    }

    printf("Informe o valor que deseja contar na matriz: ");
    scanf("%d", &x);

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(matriz[i][j] == x)
                cont++;
        }
    }
    printf("O número %d aparece %dx na matriz\n", x, cont);
    
    return 0;
}