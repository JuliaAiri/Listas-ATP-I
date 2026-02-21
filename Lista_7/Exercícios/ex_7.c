/*Programa para verificar se um triangulo e valido*/
#include<stdio.h>
int main(){
    float lado1, lado2, lado3;
    printf("Digite o primeiro lado: ");
    scanf("%f",&lado1);
    printf("Digite o segundo lado: ");
    scanf("%f",&lado2);
    printf("Digite o terceiro lado: ");
    scanf("%f",&lado3);
    if(lado1<( lado2 + lado3) && lado2<(lado1 + lado3) && lado3<(lado1 + lado2)){
        printf("Triangulo valido");
    }else{
        printf("Triangulo invalido");
    }
    return 0;
}
