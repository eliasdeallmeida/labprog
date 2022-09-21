// Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.

#include <stdio.h>

int main(void){
    int s, min, h;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &s);

    printf("%ds = ", s);

    h = s / 3600;
    s -= h * 3600;

    min = s / 60;
    s -= min * 60;

    printf("%dh : %dmin : %ds\n", h, min, s);
    
    return 0;
}