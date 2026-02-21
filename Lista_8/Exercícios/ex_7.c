/*Programa para lanchonete*/
#include<stdio.h>
int main(){
    int cod, quant;
    printf("Digite o codigo do produto: ");
    scanf("%d",&cod);
    printf("Digite a quantidade consumida: ");
    scanf("%d",&quant);
    switch(cod){
    case 100:
        printf("Cachorro quente\nValor final: %d", 7 * quant);
        break;
    case 101:
        printf("Bauru Simples\nValor final: %d", 5 * quant);
        break;
    case 102:
        printf("Hamburguer\nValor final: %d", 10 * quant);
        break;
    case 103:
        printf("Cheeseburger\nValor final: %d", 12 * quant);
        break;
    case 104:
        printf("Refrigerante\nValor final: %d", 3 * quant);
        break;
    default:
        printf("Codigo invalido");
        break;
    }
    return 0;
}
