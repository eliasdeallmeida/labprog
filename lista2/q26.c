// Escreva um programa que imprima uma tabela dos equivalentes binário, octal e hexadecimal dos números decimais no intervalo de 1 a 256.

#include <stdio.h>

int main(void){
    int i, n, dec, bin[9];
    
    for(n = 0; n <= 256; n++){
        dec = n;
        printf("%d dec = ", dec);
        
        for(i = 8; i >= 0; i--){
            if(dec % 2 == 0)
                bin[i] = 0;
            else
                bin[i] = 1;
            dec /= 2;
        }
        
        for(i = 0; i <= 8; i++){
            printf("%d", bin[i]);
        }
        
        printf(" bin = %x hex = %o oct\n", n, n);
    }
    
    return 0;
}