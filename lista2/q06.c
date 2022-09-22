// Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O código para finalizar a urna (votação) é o usuário digitar algum número negativo.

#include <stdio.h>
#include <ctype.h>

int main(void){
    int voto, v5, v7, vb, vn, total;
    char confirma;
    
    v5 = v7 = vb = vn = total = 0;

    while(1){
        printf("------------------------------------------\n");
        printf("Seu voto: ");
        scanf("%d", &voto);

        if(voto < 0){
            printf("Votação encerrada!\n");
            printf("------------------------------------------\n");
            break;
        }
        else{
            printf("Você teclou (%d). Confirma o voto? [S/N] ", voto);
            scanf(" %c", &confirma);

            confirma = toupper(confirma);
            
            if(confirma == 'S'){
                printf("Voto efetuado com sucesso!\n");
                total++;
            }
            else{
                printf("Voto não efetuado. Tente novamente.\n");
                continue;
            }
        }

        if(voto == 5) v5++;
        else if(voto == 7) v7++;
        else if(voto == 0) vb++;
        else vn++; 
    }

    printf("\n===== RESULTADO DA ELEIÇÃO =====\n");
    printf("Paulo (5): %d votos (%.1f%%)\n", v5, (float)v5/total*100);
    printf("Renata (7): %d votos (%.1f%%)\n", v7, (float)v7/total*100);
    printf("Branco (0): %d votos (%.1f%%)\n", vb, (float)vb/total*100);
    printf("Nulo: %d votos (%.1f%%)\n", vn, (float)vn/total*100);
    printf("TOTAL: %d votos\n", total);
    
    return 0;
}