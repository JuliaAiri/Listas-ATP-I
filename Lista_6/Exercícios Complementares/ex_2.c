/*Programa para ler o numero maior*/
#include<stdio.h>
int main(){
    int numero1, numero2;
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);
    if(numero1>numero2){
        printf("O maior numero: %d\n",numero1);
        printf("A diferenca entre eles: %d - %d = %d",numero1,numero2,numero1 - numero2);
    }else{
        if(numero1==numero2){
            printf("Esses numeros sao iguais\n");
            printf("A diferenca entre eles: %d - %d = %d",numero1,numero2,numero1 - numero2);
        }else{
            printf("O maior numero: %d\n",numero2);
            printf("A diferenca entre eles: %d - %d = %d", numero2,numero1,numero2 - numero1);
        }
    }
    return 0;
}
