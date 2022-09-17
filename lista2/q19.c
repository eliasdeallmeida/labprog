// Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma faixa especificada pelo usuário.

#include <stdio.h>

int main(void){
  int a, b, soma = 0;
  float media;

  printf("Informe um intervalo de números\n");
  printf("Valor de A = ");
  scanf("%d", &a);
  printf("Valor de B = ");
  scanf("%d", &b);

  if(a > b){
    a ^= b;
    b ^= a;
    a ^= b;
  }

  for(int i = a; i <= b; i++){
    soma += i;
  }
  media = (float)soma / (b - a + 1);

  printf("A média aritmética dos números de %d a %d vale %.1f\n", a, b, media);
  
  return 0;
}