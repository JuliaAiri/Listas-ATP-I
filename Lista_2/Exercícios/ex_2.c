/*Programa para calcular valor de um novo salario com aumento de 25 por cento*/
#include<stdio.h>
int main(){
    float salario, aumento;
    printf("Digite seu Salario: ");
    scanf("%f",&salario);
    aumento = salario + (salario * 0.25);
    printf("Este e seu Aumento: %f",aumento);
   return 0;
}
