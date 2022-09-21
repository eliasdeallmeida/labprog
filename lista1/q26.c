/*
Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano. (Utilize a função sqrt (numero), biblioteca math.h).
d = sqrt((x2 − x1)^2 + (y2 − y1)^2)
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int x1, y1, x2, y2;
    float d;

    printf("x1 = ");
    scanf("%d", &x1);

    printf("y1 = ");
    scanf("%d", &y1);

    printf("x2 = ");
    scanf("%d", &x2);

    printf("y2 = ");
    scanf("%d", &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância vale %.1f\n", d);
    
    return 0;
}