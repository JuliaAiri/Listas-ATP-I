/*Programa para calcular numero harmonico*/
#include<stdio.h>
int main(){
    int num, i;
    float harmonico = 1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>0){
       for(i=2;i<=num;i++){
        harmonico = harmonico + (1.0 / i);
    }
    printf("Harmonico: %f",harmonico);
    }else{
        printf("Numero invalido");
    }

    return 0;
}

