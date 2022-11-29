// Crie uma Estrutura disciplina em que um dos campos corresponde também a uma estrutura professor.

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef struct{
    char *nome;
    char *formacao;
    float salario;
}professor;

typedef struct{
    char *nome;
    int cargaHoraria;
    professor prof;
}disciplina;

void alocarString(char**);
void limparBuffer(char*);

int main(void){
    disciplina d1;

    alocarString(&d1.nome);
    alocarString(&d1.prof.nome);

    printf("Nome da disciplina: ");
    fgets(d1.nome, TAM, stdin);
    limparBuffer(d1.nome);

    printf("Carga horária de %s: ", d1.nome);
    scanf("%d", &d1.cargaHoraria);
    setbuf(stdin, NULL);

    printf("Professor de %s: ", d1.nome);
    fgets(d1.prof.nome, TAM, stdin);
    limparBuffer(d1.prof.nome);

    printf("\n=-=-=- DADOS DA DISCIPLINA -=-=-=\n");
    printf("Nome: %s\n", d1.nome);
    printf("Carga horária: %dh\n", d1.cargaHoraria);
    printf("Professor: %s\n", d1.prof.nome);
    
    return 0;
}

void alocarString(char **str){
    *str = malloc(TAM * sizeof(char));
    if(!*str){
        printf("ERRO: Memória insuficiente para alocação do ponteiro!\n");
        exit(1);
    }
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