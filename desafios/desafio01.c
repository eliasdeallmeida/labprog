#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOTAL 8

int main(void){
    unsigned char armario = 0;
    int opcao, posicao, maximo;

    maximo = pow(2, TOTAL) - 1;
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
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                if(armario == maximo){
                    printf("\nTodos os armários estão ocupados!\n");
                    break;
                }
                else{
                    do{
                        posicao = rand() % TOTAL;
                    }while((armario & (int)pow(2, posicao)) != 0);
                }
                armario |= (int)pow(2, posicao);
                printf("\nSeu armário é o de número %d.\n", posicao);
                break;
            case 2:
                printf(">>> De 0 a 7, qual armário deseja liberar? ");
                scanf("%d", &posicao);
                if(posicao < 0 || posicao > TOTAL - 1){
                    printf("\nNúmero de armário inválido!\n");
                }
                else if((armario & (int)pow(2, posicao)) == 0){
                    printf("\nO armário %d já está desocupado.\n", posicao);
                }
                else{
                    armario &= ~(int)pow(2, posicao);
                    printf("\nArmário %d foi liberado com sucesso!\n", posicao);
                }
                break;
            case 3:
                printf("\nPrograma encerrado.\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }
    }while(opcao != 3);
    
    return 0;
}