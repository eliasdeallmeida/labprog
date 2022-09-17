// Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido. A condição de término do programa é quando o usuário digitar zero.

#include <stdio.h>

int main(void){
  int n, maior, menor;
  
  for(int cont = 1;; cont++){
    printf("%dº número: ", cont);
    scanf("%d", &n);

    if(cont == 1){
      maior = n;
      menor = n;
    }
    else{
      if(n == 0){
        printf("Encerrando o programa...\n");
        break;
      }
      else if(n > maior){
        maior = n;
      }
      else if(n < menor){
        menor = n;
      }
    }
  }

  printf("O maior digitado foi %d e o menor foi %d\n", maior, menor);
  
  return 0;
}