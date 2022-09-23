// Faça um programa em C que leia uma string do usuário e a apresente na forma inversa.

#include <stdio.h>
#include <string.h>

#define TAM 20

void limpaBuffer(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

int main(void){
    char str[TAM], inverso[TAM];
    int t, p;

    printf("Digite uma frase: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0';
    if(strlen(str) >= TAM-1)
        limpaBuffer();

    t = strlen(str);

    for(int i = 0; i < TAM; i++){
        p = t-i-1;
        if(p < 0){
            inverso[i] = '\0';
            break;
        }
        else if(str[p] != '\0'){
            inverso[i] = str[p];
        }
    }

    printf("\nA frase '%s' invertida é '%s'\n", str, inverso);

    return 0;
}