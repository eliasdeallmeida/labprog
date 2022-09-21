// Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética e geométrica. (Utilize a função pow(base, expoente) da biblioteca math.h).

#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    float ma, mg;

    printf("A = ");
    scanf("%d", &a);

    printf("B = ");
    scanf("%d", &b);

    printf("C = ");
    scanf("%d", &c);

    ma = (float)(a + b + c) / 3;
    mg = pow(a * b * c, (float)1/3);
    
    printf("Média aritmética = %.1f\n", ma);
    printf("Média geométrica = %.1f\n", mg);
    
    return 0;
}