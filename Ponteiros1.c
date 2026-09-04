/*
Primeiro contato com ponteiros em linguagem C;
2º período do curso de Sistemas de Informação - UFV;
03/09/2026
*/

#include <stdio.h>

int main (){

    int a = 10;
    int *p = &a;
    
    printf("%d \n", *p); // conteúdo do endereço de memória armazenado em 'p'
    
    printf("%d \n", p); // endereço de memória do ponteiro 'p'
    
    scanf("%d", &*p); //testando scanf
    

    //testando condicional com ponteiros
    if (*p >= 18) {
        printf("Maior de idade\n");
    }
    else {
        printf("Menor de idade\n");
    }
    
    int **p2 = &p; // ponteiro para ponteiro
    
    printf("%d", **p2);
    
    return 0;
}