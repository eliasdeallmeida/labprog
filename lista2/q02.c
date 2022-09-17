// Refaça o programa da Questão 1, utilizando a estrutura de repetição com teste no final.

#include <stdio.h>

int main(void){
  int dia;

  do{
    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &dia);
    
    switch(dia){
      case 0: printf("Encerrando o programa...\n"); break;
      case 1: printf("Domingo\n"); break;
      case 2: printf("Segunda-feira\n"); break;
      case 3: printf("Terça-feira\n"); break;
      case 4: printf("Quarta-feira\n"); break;
      case 5: printf("Quinta-feira\n"); break;
      case 6: printf("Sexta-feira\n"); break;
      case 7: printf("Sábado\n"); break;
      default: printf("Número de dia inválido.\n");
    }
  }while(dia != 0);
  
  return 0;
}