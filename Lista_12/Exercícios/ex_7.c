/*Programa para calcular numero harmonico com fatorial*/
#include<stdio.h>
int main(){
    int num, i;
    float harmonico = 1, fat=1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>0){
            for(i=1;i<=num;i++){
        harmonico = harmonico + (1.0 / fat);
        fat = fat * (i + 1);
    }
    printf("Harmonico: %f",harmonico);
}else{
    printf("Numero invalido");
}
    return 0;
}
