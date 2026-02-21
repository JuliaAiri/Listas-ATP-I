/*Programa para ler um numero e verificar se é par ou ímpar*/
#include<stdio.h>
int main(){
    int numero;
    printf("Digite o Numero: ");
    scanf("%d",&numero);
    if(numero %2 == 0 ){   //% usado para resto da divisao
        printf("ESTE NUMERO E PAR");
    }else{
        printf("ESTE NUMERO E IMPAR");
    }
    return 0;
}
