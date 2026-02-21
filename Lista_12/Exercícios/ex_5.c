/*Programa para detectar numeros primos*/
#include<stdio.h>
int main(){
    int num, i, primo=1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>0){
            for(i=2; i<num && primo; i++){
        if(num %i == 0){
            printf(" Nao Primo\n");
            primo = 0;
        }
    }
    if(primo){
        printf("Primo");
    }
}else{
    printf("Numero invalido");
}
    return 0;
}
