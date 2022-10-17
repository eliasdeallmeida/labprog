// Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpaBuffer();

int main(void){
    char *str;
    int tam, cont;

    printf("Informe o tamanho da string: ");
    scanf("%d", &tam);
    limpaBuffer();

    str = malloc(tam * sizeof(char));

    printf("Informe a string: ");
    fgets(str, tam, stdin);

    str[strcspn(str, "\n")] = '\0';
    cont = strlen(str);
    if(cont >= tam) limpaBuffer();

    printf("String informada: '%s'\n", str);
    printf("A string tem %d caracteres\n", cont);

    free(str);
    
    return 0;
}

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}