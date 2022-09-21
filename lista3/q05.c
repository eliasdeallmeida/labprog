// Faça um programa em C que concatene duas strings recebidas pelo usuário. Construa uma versão com uso da função strcat() e outra sem.

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
    char s1[TAM], s2[TAM], concat1[TAM*2] = "", concat2[TAM*2];
    int i = 0, j = 0;

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

    printf("Concatenando COM strcat(): ");
    strcat(concat1, s1);
    strcat(concat1, s2);
    printf("%s\n", concat1);

    printf("Concatenando SEM strcat(): ");
    while(s1[i] != '\0'){
        concat2[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i] != '\0'){
        concat2[j] = s2[i];
        i++;
        j++;
    }
    concat2[j] = '\0';
    printf("%s\n", concat2);
    
    return 0;
}