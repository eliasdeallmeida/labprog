// Escreva um programa que receba vários números inteiros (em uma estrutura de laço) e apresente o produto do maior pelo menor número apresentado. (Obs.: Não utilize vetores.) A condição de saída do laço é o usuário digitar um número negativo e par.

#include <stdio.h>

int main(void){
    int num, maior, menor, produto, cont = 1;
    
    while(1){
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num < 0 && num % 2 == 0){
            printf("Saindo do loop...\n");
            break;
        }
        
        if(cont == 1){
            maior = menor = num;
            cont++;
        }
        else{
            if(num > maior)
                maior = num;
            else if(num < menor)
                menor = num;
        }
    }

    produto = maior * menor;
    printf("%d (maior) x %d (menor) = %d\n", maior, menor, produto);
    
    return 0;
}