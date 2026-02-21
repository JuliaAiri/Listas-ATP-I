/*Programa para calcular media ponderada de notas*/
#include<stdio.h>
int main(){
    float nota1, nota2, peso1, peso2, media;
    printf("Digite a Nota1: ");
    scanf("%f",&nota1);
    printf("Digite o Peso1: ");
    scanf("%f",&peso1);
    printf("Digite a Nota2: ");
    scanf("%f",&nota2);
    printf("Digite o Peso2: ");
    scanf("%f",&peso2);
    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    printf("Esta e sua Media: %f",media);
    return 0;
}
