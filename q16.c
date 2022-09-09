// Desenvolva um programa que calcule o salario líquido de um professor. Para elaborar o programa, é necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario liquido do professor.

#include <stdio.h>

int main(void){
  int horas;
  float horaAula, desconto, salario;

  printf("Horas trabalhadas: ");
  scanf("%d", &horas);

  printf("Valor da hora-aula: R$ ");
  scanf("%f", &horaAula);

  printf("Percentual de desconto do INSS: ");
  scanf("%f", &desconto);

  salario = horas * horaAula;
  printf("Salário bruto: R$ %.2f\n", salario);

  salario -= desconto/100 * salario;
  printf("Salário líquido: R$ %.2f\n", salario);
  
  return 0;
}