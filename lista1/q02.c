/*
Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.
Ex.: Entre com o valor 10
I) Hexadecimal: A
II) Octal: 12
*/

#include <stdio.h>

int main(void){
    int x;
    
    printf("Digite um número decimal: ");
    scanf("%d", &x);

    printf("%d decimal = %o octal\n", x, x);
    printf("%d decimal = %x hexadecimal\n", x, x);
    
    return 0;
}