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

    return 0;
}