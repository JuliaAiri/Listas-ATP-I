/*Programa para ler uma string e imprimir seu conteudo*/
#include<stdio.h>
int main(){
    char palavra[100];
    printf("Digite uma string: ");
    fgets(palavra, 100, stdin);
    printf("String: %s", palavra);
    return 0;
    }
