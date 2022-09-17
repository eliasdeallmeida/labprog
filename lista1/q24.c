// Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. Obs.: Utilize operadores binários.

#include <stdio.h>
#include <math.h>

int main(void){
  int x, n, r;

  printf("Informe o valor de x: ");
  scanf("%d", &x);

  printf("Informe o valor de n: ");
  scanf("%d", &n);

  r = x * 2 << (n - 1);
  printf("x * 2^n = %d\n", r);
  
  return 0;
}