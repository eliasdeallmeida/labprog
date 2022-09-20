// Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de entrada contém o caracter fornecido.

#include <stdio.h>
#include <string.h>

#define TAM 20

int main(void){
    char c, frase[TAM];
    int contido = 0;

    printf("Digite uma frase: ");
    fgets(frase, TAM, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite um caractere: ");
    scanf("%c", &c);
    setbuf(stdin, NULL);

    for (int i = 0; i < TAM; i++){
        if (frase[i] == c){
            contido++;
            break;
        }
    }

    if (contido)
        printf("O caractere '%c' está contido em '%s'\n", c, frase);
    else
        printf("O caractere '%c' NÃO está contido em '%s'\n", c, frase);

    return 0;
}