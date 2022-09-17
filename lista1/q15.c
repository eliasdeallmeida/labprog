// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de dias trabalhados pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele trabalhou até 10 dias não tem direito à gratificação, se ele trabalhou acima de 10 dias e até 20 dias tem direito à gratificação de 20%, se ele trabalhou acima de 20 dias tem direito à gratificação de 30%. Sempre são descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>

int main(void){
  int dias;
  float salario, gratificacao;

  printf("Dias trabalhados: ");
  scanf("%d", &dias);

  salario = 50.25 * dias;
  printf("Salário bruto: R$ %.2f\n", salario);

  if(dias <= 10){
    printf("Você não receberá gratificação.\n");
  }
  else if(dias <= 20){
    gratificacao = 0.2 * salario;
    printf("Você receberá R$ %.2f de gratificação.\n", gratificacao);
  }
  else if(dias > 20){
    gratificacao = 0.3 * salario;
    printf("Você receberá R$ %.2f de gratificação.\n", gratificacao);
  }
  
  salario -= 0.1 * salario;
  printf("Salário descontado: R$ %.2f\n", salario);

  salario += gratificacao;
  printf("Salário líquido: R$ %.2f\n", salario);
  
  return 0;
}