#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOTAL 8

unsigned char ocupaArmario(unsigned char armario);
unsigned char desocupaArmario(unsigned char armario);

int main(void){
    unsigned char armario = 0, opcao, posicao;
    srand(time(NULL));

    printf("===== SISTEMA DE ARMÁRIOS IFCE =====\n");
    do{
        printf("\n-------- PAINEL --------\n");
        for(int i = 0; i < TOTAL; i++){
            posicao = pow(2, i);
            printf((armario & posicao)? " x " : " %d ", i);
        }
        printf("\n------------------------\n");
        
        puts("(1) Ocupar armário");
        puts("(2) Liberar armário");
        puts("(3) Sair");
        printf(">>> Sua opção: ");
        scanf("%hhu", &opcao);

        switch(opcao){
            case 1: armario = ocupaArmario(armario); break;
            case 2: armario = desocupaArmario(armario); break;
            case 3: printf("\nPrograma encerrado.\n"); break;
            default: printf("\nOpção inválida!\n");
        }
    }while(opcao != 3);
    
    return 0;
}

unsigned char ocupaArmario(unsigned char armario){
    unsigned char numero, posicao, maximo;
    maximo = pow(2, TOTAL) - 1;

    if(armario == maximo){
        printf("\nTodos os armários estão ocupados!\n");
    }
    else{
        do{
            numero = rand() % TOTAL;
            posicao = pow(2, numero);
        }while((armario & posicao) != 0);
        armario |= posicao;
        printf("\nSeu armário é o de número %hhu.\n", numero);
    }

    return armario;
}

unsigned char desocupaArmario(unsigned char armario){
    unsigned char numero, posicao;

    printf(">>> De 0 a 7, qual armário deseja liberar? ");
    scanf("%hhu", &numero);

    posicao = pow(2, numero);

    if(numero < 0 || numero >= TOTAL){
        printf("\nNúmero de armário inválido!\n");
    }
    else if((armario & posicao) == 0){
        printf("\nO armário %d já está desocupado.\n", numero);
    }
    else{
        armario &= ~posicao;
        printf("\nArmário %hhu foi liberado com sucesso!\n", numero);
    }

    return armario;
}