/*
Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal através da seguinte fórmula:
I) para homens: 72.7 * altura - 58
II) para mulheres: 62.1 * altura - 44.7
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
  float altura, pesoIdeal;
  char sexo;

  printf("Sua altura [metros]: ");
  scanf("%f", &altura);

  printf("Seu sexo [M/F]: ");
  scanf(" %c", &sexo);

  sexo = toupper(sexo);

  if(sexo == 'M'){
    pesoIdeal = 72.7 * altura - 58;
  }
  else if(sexo == 'F'){
    pesoIdeal = 62.1 * altura - 44.7;
  }
  else{
    printf("ERRO\n");
  }

  printf("Seu peso ideal: %.1f Kg\n", pesoIdeal);
  
  return 0;
}