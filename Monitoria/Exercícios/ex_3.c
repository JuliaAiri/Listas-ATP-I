
/*Programa para separar parte inteira de parte fracionaria*/
#include<stdio.h>
int main(){
    double num;
    int valor;
    printf("Digite um numero: ");
    scanf("%lf",&num);
    valor = num / 1;
    printf("Parte inteira: %d\nParte fracionaria: %f", valor, num - valor);
    return 0;
}
