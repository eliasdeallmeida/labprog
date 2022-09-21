// Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real. O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais que o usuário deseja converter.

#include <stdio.h>

int main(void){
    float cotacao, real, dolar;

    printf("Cotação do dólar: R$ ");
    scanf("%f", &cotacao);
    
    printf("Valor: R$ ");
    scanf("%f", &real);

    dolar = real / cotacao;
    printf("R$ %.2f = U$ %.2f\n", real, dolar);
    
    return 0;
}