// Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo). Não utilize estrutura de decisão if.

#include <stdio.h>

int main(void){
  int x;

  printf("Digite um número: ");
  scanf("%d", &x);

  printf("Valor absoluto = %d\n", (x < 0)? ~x+1 : x);
  
  return 0;
}