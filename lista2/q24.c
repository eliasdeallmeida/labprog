// Um triângulo retângulo pode ter lados que são valores inteiros. O conjunto de três valores inteiros para os lados de um triângulo retângulo é chamado de tripla de Pitágoras. Esses três lados precisam satisfazer o relacionamento de que a soma do quadrado de dois catetos é igual ao quadrado da hipotenusa. Ache todas as triplas de Pitágoras não superiores a 500 para cateto1, cateto2 e hipotenusa. Este é um exemplo de computação por força bruta. Isso não é esteticamente atraente para muitas pessoas. Mas existem muitos motivos para essas técnicas serem importantes. Em primeiro lugar, com o poder da computação aumentando em um ritmo tão fenomenal, soluções que levariam anos, ou mesmo séculos, para serem produzidas com a tecnologia de alguns anos atrás, agora podem ser produzidas em horas, minutos ou mesmo segundos. Os chips microprocessadores recentes podem processar um bilhão de instruções por segundo! Em segundo lugar, como você descobrirá mais adiante no Curso de Ciência da Computação, existem inúmeros problemas interessantes para os quais não existe uma técnica algorítmica conhecida além da simples força bruta.

#include <stdio.h>
#include <math.h>

#define MAX 500

int calculaMdc(int x, int y){
    int resto;

    do{
        resto = x % y;
        x = y;
        y = resto;
    }while(resto != 0);
    
    return x;
}

int main(void){
    int c1, c2, aux, mdc1, mdc2;
    float h;

    for(c1 = 1; c1 <= MAX; c1++){
        for(c2 = c1; c2 <= MAX; c2++){
            h = sqrt(pow(c1, 2) + pow(c2, 2));
            aux = h;
            if(aux == h && aux <= MAX){
                mdc1 = calculaMdc(c1, c2);
                mdc2 = calculaMdc(h, mdc1);
                if(mdc1 == 1 && mdc2 == 1){
                    printf("(%d, %d, %d)\n", c1, c2, aux);
                }
            }
        }
    }
    
    return 0;
}