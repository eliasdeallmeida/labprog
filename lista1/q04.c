// Sabendo que os argumentos da função "printf" podem ser expressões (a+b, a/b, a*b...), e não somente argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.

#include <stdio.h>

int main(void){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Triplo = %d\n", x * 3);
    printf("Quadrado = %d\n", x * x);
    printf("Meio = %d\n", x / 2);

    return 0;
}