// Escreva um programa em C que modifique a Questão 1 para conter um array com 3 alunos. Escreva uma função para calcular a média dos alunos.

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
    float nota1;
    float nota2;
    float media;
}aluno;

void alocarVetorAluno(aluno**);
void preencherDados(aluno*);
void calcularMediaNotas(float*, aluno*);
void mostrarDados(aluno*);

int main(void){
    aluno *alunos = NULL;
    float media;

    alocarVetorAluno(&alunos);
    printf("\n=-=-=- PREENCHA OS CAMPOS -=-=-=\n");
    preencherDados(alunos);
    calcularMediaNotas(&media, alunos);
    printf("\n=-=-=- DADOS DOS ALUNOS -=-=-=\n");
    mostrarDados(alunos);
    printf("\nA média dos %d alunos vale %.1f\n", TAM, media);
    
    return 0;
}

void alocarVetorAluno(aluno **ps){
    *ps = malloc(TAM * sizeof(aluno));
    if(!*ps){
        printf("ERRO: Memória insuficiente para alocação do vetor!\n");
        exit(1);
    }
}

void preencherDados(aluno *dados){
    for(int i = 0; i < TAM; i++){
        printf("ALUNO %d\n", i + 1);
        printf("-> Nota 1: ");
        scanf("%f", &dados[i].nota1);
        printf("-> Nota 2: ");
        scanf("%f", &dados[i].nota2);
        dados[i].media = (dados[i].nota1 + dados[i].nota2) / 2;
    }
}

void calcularMediaNotas(float *media, aluno *dados){
    float soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += dados[i].media;
    }
    *media = soma / TAM;
}

void mostrarDados(aluno *dados){
    for(int i = 0; i < TAM; i++){
        printf("ALUNO %d\n", i + 1);
        printf("-> Nota 1: %.1f\n", dados[i].nota1);
        printf("-> Nota 2: %.1f\n", dados[i].nota2);
        printf("-> Média: %.1f\n", dados[i].media);
    }
}