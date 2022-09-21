// Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.

#include <stdio.h>

int main(void){
    int num, algarismo;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d ao contrário vale ", num);
    
    if(num < 0){
        printf("-");
        num = ~num + 1;
    }
    
    while(num != 0){
        algarismo = num % 10;
        printf("%d", algarismo);
        num /= 10;
    }
    printf("\n");
    
    return 0;
}