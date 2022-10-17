// Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros.

#include <stdio.h>

void comparaMenor(float*, float*);

int main(void){
    float num, menor, i = 0;

    do{
        printf("Informe um número (zero para parar): ");
        scanf("%f", &num);
        if(!i){
            menor = num;
            i++;
            continue;
        }
        comparaMenor(&menor, &num);
    }while(num);

    (menor)? printf("O menor valor digitado foi %.1f\n", menor) : puts("Você não digitou nenhum valor");
    
    return 0;
}

void comparaMenor(float *menor, float *num){
    *menor = ((*num < *menor) && *num)? *num : *menor;
}