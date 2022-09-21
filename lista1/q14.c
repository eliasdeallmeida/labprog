// Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus Fahrenheit. A fórmula de versão é F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main(void){
    float c, f;

    printf("Temperatura (°C): ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;
    printf("%.1f °C = %.1f °F\n", c, f);

    return 0;
}