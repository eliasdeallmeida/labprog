// Escreva um programa em C que utilize uma Estrutura estoque que contém uma string com o nomePeca, um número inteiro para identificar o número da peça, o preço em ponto flutuante e um elemento inteiro para identificar o número do pedido.

#include <stdio.h>

#define TAM 20

typedef struct{
    char nomePeca[TAM];
    float preco;
    int numeracao;
    int pedido;
}estoque;

void limparBuffer(char *str);

int main(void){
    estoque peca1;

    printf("Nome da peça: ");
    fgets(peca1.nomePeca, TAM, stdin);
    limparBuffer(peca1.nomePeca);

    printf("Preço da peça: ");
    scanf("%f", &peca1.preco);

    printf("Numeração da peça: ");
    scanf("%d", &peca1.numeracao);

    printf("Nº do pedido: ");
    scanf("%d", &peca1.pedido);

    printf("\n=-=-=- INFORMAÇÕES DA PEÇA -=-=-=\n");
    printf("Nome: %s\n", peca1.nomePeca);
    printf("Preço: R$ %.2f\n", peca1.preco);
    printf("Numeração: %d\n", peca1.numeracao);
    printf("Nº do pedido: %d\n", peca1.pedido);
    
    return 0;
}

void limparBuffer(char *str){
    int limpo = 0;
    for(int i = 0; i < TAM && !limpo; i++){
        if(*(str + i) == '\n'){
            *(str + i) = '\0';
            limpo++;
        }
    }
    if(!limpo){
        char c;
        while((c = getchar()) != '\n');
    }
}