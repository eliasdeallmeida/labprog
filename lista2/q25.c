/*
Calcule o valor de π a partir da série infinita
π = 4 − 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + (...)
Imprima uma tabela que mostre o valor de π aproximado por um termo dessa série, e depois por dois termos, três termos, e assim por diante.
*/

#include <stdio.h>

int main(void){
  float pi = 0;
  int n, divisor = 1;

  printf("Digite um valor: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    if(i % 2 == 0)
      pi -= 4 / (float)divisor;
    else
      pi += 4 / (float)divisor;
    
    printf("Somando-se %d termo(s), pi vale %.5f\n", i, pi);
    divisor += 2;
  }
  
  return 0;
}