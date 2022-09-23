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
    char str1[TAM], str2[TAM];
    int i = 0, diferente = 0;

    printf("Digite uma frase: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    if(strlen(str1) >= TAM-1)
        limpaBuffer();

    printf("Digite outra frase: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if(strlen(str2) >= TAM-1)
        limpaBuffer();

    printf("Frase 1 = %s\n", str1);
    printf("Frase 2 = %s\n", str2);

    printf("Verificando COM strcmp(): ");
    (strcmp(str1, str2))? puts("Frases diferentes.") : puts("Frases iguais.");

    printf("Verificando SEM strcmp(): ");
    for(int i = 0; i < TAM; i++){
        if(str1[i] != str2[i]){
            diferente++;
            break;
        }
        else if(str1[i] == '\0' && str2[i] == '\0'){
            break;
        }
    }
    (diferente)? puts("Frases diferentes.") : puts("Frases iguais.");
    
    return 0;
}