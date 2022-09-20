// Faça um programa em C que leia uma string do usuário e informe a quantidade de caracteres da string fornecida. Não use a função strlen().

#include <stdio.h>
#include <string.h>

#define TAM 20

int main(void){
    char s[TAM];
    int i = 0;

    printf("Digite uma frase: ");
    fgets(s, TAM, stdin);
    s[strcspn(s, "\n")] = '\0';
    setbuf(stdin, NULL);

    while (s[i] != '\0'){
        i++;
    }

    printf("Existem %d caracteres na frase '%s'\n", i, s);

    return 0;
}