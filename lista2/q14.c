// Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>

int main(void){
  int a, b,  multiplos3 = 0;

  printf("Informe um intervalo de números\n");
  printf("Valor de A = ");
  scanf("%d", &a);
  printf("Valor de B = ");
  scanf("%d", &b);

  if(a > b){
    a ^= b;
    b ^= a;
    a ^= b;
  }

  for(int n = a; n <= b; n++){
    if(n % 3 == 0)
      multiplos3 += 1;
  }

  printf("Dentro do intervalo %d-%d existem %d múltiplos de 3.\n", a, b, multiplos3);
  
  return 0;
}