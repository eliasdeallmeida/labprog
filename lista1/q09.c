// Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores sucessor e antecessor.

#include <stdio.h>

int main(void){
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("Antecessor = %d\n", num - 1);
  printf("Sucessor = %d\n", num + 1);
  
  return 0;
}