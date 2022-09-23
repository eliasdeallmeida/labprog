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
    char str1[TAM], str2[TAM], concat1[TAM*2] = "", concat2[TAM*2];
    int i = 0, j = 0;

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

    printf("Concatenando COM strcat(): ");
    strcat(concat1, str1);
    strcat(concat1, str2);
    printf("%s\n", concat1);

    printf("Concatenando SEM strcat(): ");
    while(str1[i] != '\0'){
        concat2[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while(str2[i] != '\0'){
        concat2[j] = str2[i];
        i++;
        j++;
    }
    concat2[j] = '\0';
    printf("%s\n", concat2);
    
    return 0;
}