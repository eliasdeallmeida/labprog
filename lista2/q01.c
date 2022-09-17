// Implemente um programa que tenha como entrada um número (1-7) que corresponde a um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terça, quarta, quinta, sexta, sábado). Se o número lido não estiver no intervalo 1-7, imprima: “Número de dia não válido”. O programa deve permanecer executando até que o usuário tecle o numero 0. (Utilize obrigatoriamente teste no início).

#include <stdio.h>

void limpaBuffer(char c){
  while((c = getchar()) != '\n' && c != EOF);
}

int main(void){
  char dia;

  while(dia != '0'){
    printf("Digite um número entre 1 e 7: ");
    scanf("%c", &dia);

    limpaBuffer(dia);
    
    switch(dia){
      case '0': printf("Encerrando o programa...\n"); break;
      case '1': printf("Domingo\n"); break;
      case '2': printf("Segunda-feira\n"); break;
      case '3': printf("Terça-feira\n"); break;
      case '4': printf("Quarta-feira\n"); break;
      case '5': printf("Quinta-feira\n"); break;
      case '6': printf("Sexta-feira\n"); break;
      case '7': printf("Sábado\n"); break;
      default: printf("Número de dia inválido.\n");
    }
  }
  
  return 0;
}