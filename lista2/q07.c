// Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um valor nulo a leitura deve ser repetida.

#include <stdio.h>

int main(void){
    int a, b;
    float divisao;

    printf("Valor de A: ");
    scanf("%d", &a);

    do{
        printf("Valor de B: ");
        scanf("%d", &b);
      
        if(b == 0)
            printf("Digite um valor para B diferente de zero!\n");
    }while(b == 0);

    divisao = (float)a / b;
    printf("%d / %d = %.1f\n", a, b, divisao);
    
    return 0;
}