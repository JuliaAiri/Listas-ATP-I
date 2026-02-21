/*Programa para calcular antecessor e sucessor*/
#include<stdio.h>
int main(){
    int numero, antecessor, sucessor;
    printf("Digite o Numero: ");
    scanf("%i",&numero);
    antecessor = numero - 1;
    printf("Este e o Antecessor: %i\n",antecessor);
    sucessor = numero + 1;
    printf("Este e o Sucessor: %i",sucessor);
   return 0;
}

