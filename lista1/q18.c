// Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência e sua área. Use o valor de 3,14159 para ”pi”. Faça cada um destes cálculos dentro da instruções (ou instruções) printf e use o especificador de conversão %f.

#include <stdio.h>
#include <math.h>

int main(void){
    int r;
    float pi = 3.14159;

    printf("Informe o valor do raio (m): ");
    scanf("%d", &r);

    printf("Diâmetro = %d m\n", r * 2);
    printf("Circunferência = %.2f m\n", 2 * pi * r);
    printf("Área = %.2f m^2\n", pi * pow(r, 2));
    
    return 0;
}