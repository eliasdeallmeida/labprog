// Escreva um programa que receba dois valores numéricos X e Y (unsigned char) e esconda todos os bits de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores a Y. (Obs.: Não utilizar valores para Y menores que 5).

#include <stdio.h>
#include <math.h>

int main(void){
    unsigned char x, y;
    int posicao, termo, uniao, bitx;
    
    printf("Valor de X: ");
    scanf("%hhu", &x);
    printf("Valor de Y: ");
    scanf("%hhu", &y);

    posicao = -4;

    for(int i = 0; i < 8; i++){
        termo = y + posicao;

        if(termo == y){
            posicao++;
            i--;
            continue;
        }
        
        bitx = (x & (int)pow(2, i))? 1 : 0;
        
        if((termo % 2) < bitx)
            uniao = termo | 1;
        else if((termo % 2) > bitx)
            uniao = termo ^ 1;
        else
            uniao = termo;
        
        printf("num = %d -> num com bit de x = %d\n", termo, uniao);
        posicao++;
    }
    
    return 0;
}