// Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.

#include <stdio.h>

int main(void){
  float num;

  printf("Digite um número com casas decimais: ");
  scanf("%f", &num);

  printf("Esse número com apenas uma casa decimal vale %.1f\n", num);
}