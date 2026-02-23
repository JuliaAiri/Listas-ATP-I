/*Programa para ler dados pessoais de uma pessoa*/
#include<stdio.h>
int main(){
    char nome[100], endereco[1000];
    int idade, telefone[20];
    printf("Digite um nome: ");
    gets(nome);;
    printf("Digite um endereco: ");
    gets(endereco);
    printf("Digite um telefone: ");
    gets(telefone);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Dados - Nome: %s\tIdade: %d\tEndereco: %s\tTelefone: %s,", nome, idade, endereco, telefone);
    return 0;
    }
