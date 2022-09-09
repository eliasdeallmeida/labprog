/*
Diga a ordem de cálculo dos operadores em cada uma das instrucões em C a seguir e mostre o valor de x depois que cada instrução for executada.
a) x = 7 + 3 * 6  / 2 - 1
b) x = 2 % 2 + 2 * 2 - 2 / 2
c) x = (3 * 9 * (3 + (9 * 3 / (3))));

a) 
1. 3 * 6 = 18
2. 18 / 2 = 9
3. 9 - 1 = 8
4. 7 + 8 = 15
R = 15

b)
1. 2 % 2 = 0
2. 2 * 2 = 4
3. 2 / 2 = 1
4. 0 + 4 - 1 = 3
R = 3

c)
1. 9 * 3 = 27
2. 27 / 3 = 9
3. 3 + 9 = 12
4. 3 * 9 * 12 = 324
R = 324
*/

#include <stdio.h>

int main(void){
  int x;
  
  x = 7 + 3 * 6 / 2 - 1;
  printf("a) %d\n", x);

  x = 2 % 2 + 2 * 2 - 2 / 2;
  printf("b) %d\n", x);
  
  x = (3 * 9 * (3 + (9 * 3 / (3))));
  printf("c) %d\n", x);
  
  return 0;
}