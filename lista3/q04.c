// Faça um programa em C que leia duas strings do usuário e informe se elas são iguais. Faça uma versão com o uso da função strcmp() e outra sem.

#include <stdio.h>
#include <string.h>

#define TAM 20

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

int main(void){
    char s1[TAM], s2[TAM];
    int diferente = 0;

    printf("Digite uma frase: ");
    fgets(s1, TAM, stdin);
    s1[strcspn(s1, "\n")] = '\0';
    if(strlen(s1) >= TAM-1)
        limpaBuffer();
    printf("Frase 1 = %s\n", s1);

    printf("Digite outra frase: ");
    fgets(s2, TAM, stdin);
    s2[strcspn(s2, "\n")] = '\0';
    if(strlen(s2) >= TAM-1)
        limpaBuffer();
    printf("Frase 2 = %s\n", s2);

    printf("Verificando COM strcmp(): ");
    (strcmp(s1, s2))? puts("Frases diferentes.") : puts("Frases iguais.");

    printf("Verificando SEM strcmp(): ");
    for(int i = 0; i < TAM; i++){
        if(s1[i] != s2[i]){
            diferente++;
            break;
        }
    }
    (diferente)? puts("Frases diferentes.") : puts("Frases iguais.");
    
    return 0;
}