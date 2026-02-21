/*Programa para ler valor de um produto e classificá-lo*/
#include<stdio.h>
int main(){
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    if(valor>=0){
      if(valor<=100){
        printf("O PRODUTO ESTA BARATO");
    }else{
        if(valor<=500){
            printf("O PRODUTO ESTA NORMAL");
        }else{
            printf("O PRODUTO ESTA CARO");
        }
    }
    }else{
        printf("Valor invalido");
    }
    return 0;
}
