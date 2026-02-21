/*Programa para calcular sequencia de Fibonacci*/
#include<stdio.h>
int main(){
    int num, i, n1=1, n2=1, termo;
    printf("Digite um termo: ");
    scanf("%d",&termo);
    if(termo==1){
        printf("1");
        return 0;
    }else{
        if(termo==2){
            printf("1");
            return 0;
        }else{
            for(i=3;i<=termo;i++){
               num = n1 + n2;
            n1 = n2;
            n2 = num;
            }
        }
    }
    printf("Numero: %d", num);
    return 0;
}

