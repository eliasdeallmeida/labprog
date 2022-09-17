// Construir um programa que apresente como resultado o fatorial dos valores ímpares situados na faixa número de 1 a 10.

#include <stdio.h>

int main(void){
  int num, fatorial;

  for(int i = 1; i <= 10; i++){
    if(i % 2 != 0){
      num = i;
      fatorial = 1;
      printf("%d é ímpar e seu fatorial vale ", num);
      while(num >= 1){
        fatorial *= num;
        num--;
      }
      printf("%d\n", fatorial);
    }
  }
  
  return 0;
}