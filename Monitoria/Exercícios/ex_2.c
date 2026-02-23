/*Programa para adivinhar numero secreto*/
#include<stdio.h>
int main(){
    int i, num=1, h=1;
    for(i=0; num!=94; i++){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num>94){
            printf("O numero digitado maior do que o esperado\n");
        }else{
            if(num<94){
                printf("O numero digitado menor do que o esperado\n");
            }else{
                if(num==94){
                    h = 0;
                }
            }
        }
    }
    if(h==0){
        printf("Parabens! Voce acertou.");
    }
    return 0;
}
