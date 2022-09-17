// Escreva um programa que apresente o somatório de todos os números divisíveis por 3 pertencentes ao intervalo [0,100] e o somatório de todos os números divisíveis por 5 pertencentes ao intervalo ]100,200]. Obs.: Utilize apenas um laço de repetição.

#include <stdio.h>

int main(void){
  int sm3, sm5;
  sm3 = sm5 = 0;

  for(int n = 0; n < 200; n++){
    if(n <= 100 && n % 3 == 0)
      sm3 += n;
    else if(n > 100 && n % 5 == 0)
      sm5 += n;
  }
  
  printf("A soma dos mútliplos de 3 de [0,100] vale %d\n", sm3);
  printf("A soma dos mútliplos de 5 de ]100,200] vale %d\n", sm5);
  
  return 0;
}