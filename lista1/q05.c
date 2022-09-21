// Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.

#include <stdio.h>

int main(void){
    float valor;

    printf("Valor da conta: R$ ");
    scanf("%f", &valor);

    valor += (0.1 * valor);
    printf("Valor total: R$ %.2f\n", valor);
    
    return 0;
}