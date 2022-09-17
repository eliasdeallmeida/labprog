// Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um expoente que varie do valor 0 a 7.

#include <stdio.h>
#include <math.h>

int main(void){
  int potencia;
  
  for(int n = 0; n <= 7; n++){
    potencia = pow(3, n);
    printf("3^%d = %d\n", n, potencia);
  }
  
  return 0;
}