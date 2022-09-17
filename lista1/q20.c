// Escreva um programa que receba um número inteiro e então determine e imprima se ele é par ou ímpar. Obs.: Não utilizar estrutura de decisão if.

#include <stdio.h>

int main(void){
  int x;

  printf("Digite um número inteiro: ");
  scanf("%d", &x);

  (x % 2)? printf("%d é ÍMPAR.\n", x) : printf("%d é PAR.\n", x);
  
  return 0;
}