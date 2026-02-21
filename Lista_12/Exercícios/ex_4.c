/*Programa para ler numero inteiro 3n a 5n*/
#include<stdio.h>
int main(){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>=3){
        for(i=3; i<=num; i++){
           if(i%3==0 || i%5==0){
            printf("%d\t",i);
           }
        }
    }else{
        printf("Numero invalido");

    }
    return 0;
}
