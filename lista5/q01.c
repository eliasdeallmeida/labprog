// Escreva um programa que receba dois valores por linha de execução e realize a soma ou multiplicação, conforme um código de operação também recebido por linha de execução.

#include <stdio.h>
#include <stdlib.h>

#define MAX_OPERACOES 2

void somar(int, int, int*);
void multiplicar(int, int, int*);
void calcular(void (*)(), int, int, int*);

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("ERRO: Digite %s <valor A> <valor B> <operação>\n", argv[0]);
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int operacao = atoi(argv[3]);
    int resultado;
    void (*pFunc[])() = {somar, multiplicar};

    if(operacao < 0 || operacao >= MAX_OPERACOES){
        printf("ERRO: Informe um valor entre 0 e %d\n", MAX_OPERACOES - 1);
        exit(2);
    }

    calcular(pFunc[operacao], a, b, &resultado);
    printf("O resultado é %d\n", resultado);

    return 0;
}

void somar(int a, int b, int *resultado){
    *resultado = a + b;
}

void multiplicar(int a, int b, int *resultado){
    *resultado = a * b;
}

void calcular(void (*pFunc)(), int a, int b, int *resultado){
    (*pFunc)(a, b, resultado);
}