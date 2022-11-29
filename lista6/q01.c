// Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuário, e sua média.

#include <stdio.h>

typedef struct{
    float nota1;
    float nota2;
    float media;
}aluno;

int main(void){
    aluno a1;

    printf("Informe a nota 1: ");
    scanf("%f", &a1.nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &a1.nota2);

    a1.media = (a1.nota1 + a1.nota2) / 2;
    printf("A média do aluno foi %.1f\n", a1.media);
    
    return 0;
}