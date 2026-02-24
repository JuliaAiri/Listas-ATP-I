/*Programa para ler uma string e apresentar a quantidade de caracteres*/
#include<stdio.h>
#include<string.h>
int main(){
    char nome[30];
    int tamanho;
    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    tamanho = strlen(nome);
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d", tamanho);
    return 0;
}
