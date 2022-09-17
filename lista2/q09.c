// A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.

#include <stdio.h>

int main(void){
  int a, b, c;
  a = b = 1;

  printf("%d - > %d -> ", a, b);

  for(int n = 2; n < 20; n++){
    c = a + b;
    a = b;
    b = c;
    printf("%d -> ", c);
  }
  printf("FIM\n");
  
  return 0;
}