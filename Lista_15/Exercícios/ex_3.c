/*Programa para verificar se strings sao iguais*/
#include<stdio.h>
#include<string.h>
int main(){
    char string1[50], string2[50];
    int comparacao;
    printf("Digite uma string: ");
    fgets(string1, 50, stdin);
    printf("Digite a segunda string: ");
    fgets(string2, 50, stdin);
    comparacao = strcmp(string1, string2);
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    printf("Comparacao: %d\n", comparacao);
    return 0;
}
