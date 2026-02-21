/*Programa para ler código de produto*/
#include<stdio.h>
int main(){
    int num;
    printf("Digite o codigo de 1 ate 15: ");
    scanf("%d",&num);
    switch(num){
    case 1:
        printf("Alimento nao perecivel");
        break;
    case 2 ... 4:
        printf("Alimento perecivel");
        break;
    case 5 ... 6:
        printf("Vestuario");
        break;
    case 7:
        printf("Higiene Pessoal");
        break;
    case 8 ... 15:
        printf("Limpeza e Utensilios Domesticos");
        break;
    default:
        printf("Invalido");
        break;
    }
    return 0;
}
