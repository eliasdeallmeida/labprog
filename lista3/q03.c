// Faça um programa em C que leia uma string do usuário e informe a quantidade de caracteres da string fornecida. Não use a função strlen().

#include <stdio.h>
#include <string.h>

#define TAM 20

int main(void){
    char str[TAM];
    int i = 0;

    printf("Digite uma frase: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0';
    setbuf(stdin, NULL);

    while(str[i] != '\0'){
        i++;
    }

    printf("Existem %d caracteres na frase '%s'\n", i, str);

    return 0;
}