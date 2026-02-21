/*Programa para converter real em dolar*/
#include<stdio.h>
int main(){
   float real, dolar;
   printf("Digite o valor em Reais: ");
   scanf("%f",&real);
   dolar = real / 5.71;
   printf("Este e o valor disponivel em Dolares: %f",dolar);
   return 0;
}
