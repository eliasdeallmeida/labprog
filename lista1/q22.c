/*
A linguagem C pode representar letras maiúsculas, letras minúsculas e uma grande variedade de símbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e as representações dos números inteiros correspondentes àqueles caracteres é chamado conjunto de caracteres do computador. Você pode imprimir o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução: printf(”%d”, ’A’);
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes ao conjunto seguinte: A B C a b c 0 1 2 $ * + / e o caractere espaço em branco.
*/

#include <stdio.h>

int main(void){
    printf("\nA = %d\n", 'A');
    printf("B = %d\n", 'B');
    printf("C = %d\n", 'C');
    
    printf("\na = %d\n", 'a');
    printf("b = %d\n", 'b');
    printf("c = %d\n", 'c');

    printf("\n0 = %d\n", '0');
    printf("1 = %d\n", '1');
    printf("2 = %d\n", '2');

    printf("\nESPAÇO = %d\n", ' ');
    printf("$ = %d\n", '$');
    printf("* = %d\n", '*');
    printf("+ = %d\n", '+');
    printf(". = %d\n", '.');
    printf("/ = %d\n", '/');
    
    return 0;
}