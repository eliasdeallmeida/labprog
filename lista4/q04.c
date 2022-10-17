// Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste o vetor com tipos de dados diferentes, analise os endereços. O que você observou?

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vet_i, tam;
    float *vet_f;
    double *vet_d;
    char *vet_c, c;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    vet_i = malloc(tam * sizeof(int));
    vet_f = malloc(tam * sizeof(float));
    vet_d = malloc(tam * sizeof(double));
    vet_c = malloc(tam * sizeof(char));

    // recebe sos vetores
    for(int i = 0; i < tam; i++){
        printf("int[%d] = ", i);
        scanf("%d", &vet_i[i]);
    }
    printf("\n");
    
    for(int i = 0; i < tam; i++){
        printf("float[%d] = ", i);
        scanf("%f", &vet_f[i]);
    }
    printf("\n");
    
    for(int i = 0; i < tam; i++){
        printf("double[%d] = ", i);
        scanf("%lf", &vet_d[i]);
    }
    printf("\n");
    
    for(int i = 0; i < tam; i++){
        while((c = getchar()) != '\n' && c != EOF);
        printf("char[%d] = ", i);
        scanf(" %c", &vet_c[i]);
    }
    printf("\n");

    // mostra os vetores
    printf("Vetor inteiro\n");
    for(int i = 0; i < tam; i++)
        printf("%d [%p]\n", vet_i[i], &vet_i[i]);
    
    printf("\nVetor float\n");
    for(int i = 0; i < tam; i++)
        printf("%f [%p]\n", vet_f[i], &vet_f[i]);
    
    printf("\nVetor double\n");
    for(int i = 0; i < tam; i++)
        printf("%lf [%p]\n", vet_d[i], &vet_d[i]);
    
    printf("\nVetor char\n");
    for(int i = 0; i < tam; i++)
        printf("%c [%p]\n", vet_c[i], &vet_c[i]);

    // libera memória alocada
    free(vet_i);
    free(vet_f);
    free(vet_d);
    free(vet_c);
    
    return 0;
}