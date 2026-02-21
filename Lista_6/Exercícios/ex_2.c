/*Programa para ver se é negativo ou positivo*/
#include<stdio.h>
int main(){
    int numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    if(numero>0){
        printf("POSITIVO");
    }else{
        if(numero==0){
            printf("NULO");
        }else{
            printf("NEGATIVO");
        }
    }
      return 0;
}
