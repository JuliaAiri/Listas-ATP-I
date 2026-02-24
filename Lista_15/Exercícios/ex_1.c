/*Programa para ler dados pessoais de uma pessoa*/
#include<stdio.h>
#include<string.h>
int main(){
    char nome[15], endereco[50], telefone[20], dados[85];
    int idade, i;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    getchar();
    printf("Digite seu nome: ");
    fgets(nome, 15, stdin);
    for(i=0; nome[i]!= '\0'; i++){
        if(nome[i]=='\n'){
            nome[i] = '\0';
        }
    }
    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);
    for(i=0; endereco[i]!= '\0'; i++){
        if(endereco[i]=='\n'){
            endereco[i] = '\0';
        }
    }
    printf("Digite seu telefone: ");
    fgets(telefone, 20, stdin);
    for(i=0; telefone[i]!= '\0'; i++){
        if(telefone[i]=='\n'){
            telefone[i] = '\0';
        }
    }
    sprintf(dados, "%s  %s  %s",nome, endereco, telefone); //melhor alternativa para concatenar
    printf("Dados: %s  %d", dados, idade);
    return 0;
}
