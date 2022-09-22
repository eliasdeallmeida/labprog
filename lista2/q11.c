// Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, quadrado;

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

    printf("Dentro do intervalo %d-%d, os quadrados dos múltiplos de 4 são:\n", a, b);
    
    for(int n = a; n <= b; n++){
        if(n % 4 == 0){
            quadrado = pow(n, 2);
            printf("%d^2 = %d\n", n, quadrado);
        }
    }
    
    return 0;
}