/*Programa para calcular preço de cantina*/
#include<stdio.h>
int main(){
    int num, i, cod, quant, total = 0, valor;
    printf("Quantos itens serao pedidos: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("Digite o codigo: ");
        scanf("%d",&cod);
        printf("Digite a quantidade: ");
        scanf("%d",&quant);
        switch(cod){
        case 100:
            valor = 10 * quant;
            printf("Valor: %d\n", valor);
            break;
        case 101:
            valor = 12 * quant;
            printf("Valor: %d\n", valor);
            break;
        case 102:
            valor = 15 * quant;
            printf("Valor %d\n", valor);
            break;
        case 103:
            valor = 11 * quant;
            printf("Valor: %d\n", valor);
            break;
        case 104:
            valor = 15 * quant;
            printf("Valor: %d\n", valor);
            break;
        case 105:
            valor = 3 * quant;
            printf("Valor: %d\n", valor);
            break;
        default:
            printf("Codigo invalido\n");
            break;
        }
        total = total + valor;
    }
    printf("Valor total: %d", total);
    return 0;
}
