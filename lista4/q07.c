// Escreva um programa que concatene duas strings utilizando ponteiros.

#include <stdio.h>
#include <string.h>

#define TAM 20

void limpaBuffer();
void concatenaStrings(char*, char*, char*, int);

int main(void){
    char str1[TAM], str2[TAM], strc[TAM*2];

    printf("Informe a string: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    if(strlen(str1) >= TAM-1) limpaBuffer();

    printf("Informe a string: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if(strlen(str2) >= TAM-1) limpaBuffer();
    
    concatenaStrings(str1, str2, strc, TAM);

    printf("String 1: '%s'\n", str1);
    printf("String 2: '%s'\n", str2);
    printf("String concatenada: '%s'\n", strc);
    
    return 0;
}

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

void concatenaStrings(char *str1, char *str2, char *strc, int tam){
    int i = 0, j = 0;
    while(*(str1 + i) != '\0'){
        *(strc + j) = *(str1 + i);
        i++;
        j++;
    }
    i = 0;
    while(*(str2 + i) != '\0'){
        *(strc + j) = *(str2 + i);
        i++;
        j++;
    }
    *(strc + j) = '\0';
}