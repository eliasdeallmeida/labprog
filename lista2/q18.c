// Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um grão, no segundo quadro colocam-se dois grãos (tendo neste momento três grãos), no terceiro quadro colocam-se quatro grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos (tendo-se então quinze grãos) até atingir o sexagésimo quarto quadro.

#include <stdio.h>
#include <math.h>

int main(void){
  int quadros;
  float soma = 0;

  for(quadros = 0; quadros < 64; quadros++){
    soma += pow(2, quadros);
    printf("Em %d quadros terão %.0f grãos de trigo.\n", quadros+1, soma);
  }
  
  return 0;
}