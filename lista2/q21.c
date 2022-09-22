// Um palíndromo é um número, ou frase textual, que pode ser lido da mesma forma da esquerda para a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos é um palíndromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se ele é ou não um palíndromo. [Dica: use os operadores de divisão e módulo para separar o número em seus dígitos individuais.]

#include <stdio.h>
#include <math.h>
#define MAX 5

int main(void){
    int num, inverso, algarismo, aux;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    aux = num;
    inverso = 0;

    for(int i = MAX-1; i >= 0; i--){
        algarismo = aux % 10;
        inverso += algarismo * pow(10, i);
        aux /= 10;
    }

    printf("O número digitado foi %d e seu inverso é %d\n", num, inverso);

    if(num == inverso)
        printf("Logo, é um palíndromo!\n");
    else
        printf("Logo, NÃO é um palíndromo!\n");
    
    return 0;
}