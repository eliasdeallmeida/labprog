// Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(void){
  int h, min, s;

  printf("Horas: ");
  scanf("%d", &h);

  printf("Minutos: ");
  scanf("%d", &min);

  printf("Segundos: ");
  scanf("%d", &s);

  s += h * 3600 + min * 60;
  printf("Tempo total = %d s\n", s);
  
  return 0;
}