// Escreva um programa que leia um número inteiro e determine e imprima quantos dígitos no inteiro são algarismos 7.

#include <stdio.h>
#include <math.h>

int main(void){
  int num, aux, cont, qtd7;
  
  printf("Digite um número: ");
  scanf("%d", &num);
  
  aux = num;
  cont = qtd7 = 0;

  while(aux != 0){
    aux /= 10;
    cont++;
  }

  for(int i = 0; i < cont; i++){
    aux = (num % (int)pow(10, i+1)) / pow(10, i);
    if(aux == 7) qtd7++;
  }
  
  printf("O número %d possui %d algarismo(s) 7.\n", num, qtd7);
  
  return 0;
}