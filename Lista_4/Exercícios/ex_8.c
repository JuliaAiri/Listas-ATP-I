/*Programa para calcular valor de um produto com 12 por cento de desconto*/
#include<stdio.h>
int main(){
   float valor, desconto;
   printf("Digite o Valor: ");
   scanf("%f",&valor);
   desconto = valor - (valor * 0.12);
   printf("Este e o novo preco: %f",desconto);
   return 0;
}
