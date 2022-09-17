// Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.

#include <stdio.h>
#include <math.h>

int main(void){
  int num, quadrado;
  
  printf("Digie um número: ");
  scanf("%d", &num);

  quadrado = pow(num, 2);
  printf("%d^2 = %d\n", num, quadrado);
  
  return 0;
}