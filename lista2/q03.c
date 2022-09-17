// Escreva um programa que leia um número inteiro e positivo F e calcule o fatorial deste número.

#include <stdio.h>

int main(void){
  int num, fatorial = 1;

  printf("Digite um número: ");
  scanf("%d", &num);
  
  printf("%d! = ", num);
  
  if(num >= 0){
    while(num >= 1){
      fatorial *= num;
      num--;
    }
    printf("%d\n", fatorial);
  }
  else{
    printf("ERRO\n");
  }
  
  return 0;
}