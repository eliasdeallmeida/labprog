// Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(void){
  int volume, comprimento, largura, altura;

  printf("Comprimento [metros]: ");
  scanf("%d", &comprimento);

  printf("Largura [metros]: ");
  scanf("%d", &largura);

  printf("Altura [metros]: ");
  scanf("%d", &altura);

  volume = comprimento * largura * altura;
  printf("Volume = %d m^3\n", volume);

  return 0;
}