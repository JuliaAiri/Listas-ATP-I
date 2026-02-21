/*Programa que faca a soma de tres valores inteiros*/
#include<stdio.h>
int main(){
    int numero1, numero2, numero3, soma;
    printf("Digite o Numero1: ");
    scanf("%d",&numero1);
    printf("Digite o Numero2: ");
    scanf("%d",&numero2);
    printf("Digite o Numero3: ");
    scanf("%d",&numero3);
    soma = numero1 + numero2 + numero3;
    printf("Resultado da Soma: %d",soma);
    return 0;
}
