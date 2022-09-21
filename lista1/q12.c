// Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

#include <stdio.h>

int main(void){
    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite outro número inteiro: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %.1f\n", x, y, (float)x / y);
    printf("Resto de %d / %d = %d\n", x, y, x % y);

    return 0;
}