// Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual deve ser apresentada de acordo com sua forma tradicional.

#include <stdio.h>

int main(void){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}