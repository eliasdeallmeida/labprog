// Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>

int main(void){
    int a, b, soma = 0;

    printf("Informe um intervalo de números\n");
    printf("Valor de A = ");
    scanf("%d", &a);
    printf("Valor de B = ");
    scanf("%d", &b);

    if(a > b){
        a ^= b;
        b ^= a;
        a ^= b;
    }

    for(int n = a; n <= b; n++){
        if(n % 2 == 0)
            soma += n;
    }

    printf("A soma dos pares dentro do intervalo %d-%d vale %d\n", a, b, soma);
    
    return 0;
}