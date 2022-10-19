// Escreva um programa que copie uma string para outra usando ponteiros.

#include <stdio.h>
#include <string.h>

#define TAM 20

void copiaString(char*, char*);

int main(void){
    char str[TAM], cpy[TAM];
    
    printf("Informe a string: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0';

    copiaString(str, cpy);
    
    printf("String digitada: %s\n", str);
    printf("String copiada: %s\n", cpy);
    
    return 0;
}

void copiaString(char *p_str, char *p_cpy){
    int i = 0;
    while(*(p_str + i) != '\0'){
        *(p_cpy + i) = *(p_str + i);
        i++;
    }
}