/*Programa para ver se números são iguais ou diferentes*/
#include<stdio.h>
int main(){
    float numero1, numero2;
    printf("Digite o Primeiro Numero: ");
    scanf("%f",&numero1);
    printf("Digite o Segundo Numero: ");
    scanf("%f",&numero2);
    if(numero1==numero2){
        printf("IGUAIS");
    }else{
        printf("DIFERENTES");
    }
    return 0;
}
