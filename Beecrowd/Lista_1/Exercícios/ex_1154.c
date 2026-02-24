/*Programa para fazer media de pessoas*/
#include<stdio.h>
int main(){
    int num=1, i;
    float media, soma=0, pessoas = 0;
    for(i=0;i<=num;i++){
        scanf("%d",&num);
        if(num>=0){
        soma = soma + num;
        pessoas = pessoas + 1;
        media = soma / pessoas;
        }
        }
        printf("%.2f\n",media);
    return 0;
}
