/*Programa para calcular a media aritmetica*/
#include<stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite Nota1: ");
    scanf("%f",&nota1);
    printf("Digite Nota2: ");
    scanf("%f",&nota2);
    printf("Digite Nota3: ");
    scanf("%f",&nota3);
    printf("Digite Nota4: ");
    scanf("%f",&nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A Media: %f",media);
    return 0;
}
