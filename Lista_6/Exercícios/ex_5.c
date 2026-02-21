/*Programa para ler dois números e colocá-los em ordem crescente*/
#include<stdio.h>
int main(){
    float numero1, numero2;
    printf("Digite o Primeiro Numero: ");
    scanf("%f",&numero1);
    printf("Digite o Segundo Numero: ");
    scanf("%f",&numero2);
    if(numero1>numero2){
        printf("Em ordem crescente: %f\t %f",numero2, numero1);
    }else{
        if(numero1==numero2){
        printf("Os numeros sao iguais");
        }else{
        printf("Em ordem crescente: %f\t %f",numero1, numero2);

    }
    return 0;
}
}
