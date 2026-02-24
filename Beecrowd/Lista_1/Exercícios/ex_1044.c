/*Programa para ver se e multiplo*/
#include<stdio.h>
int main(){
    int A, B;
    scanf("%d",&A);
    scanf("%d",&B);
    if(A>B){
        if(A % B ==0){
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }else{
        if(B>A){
            if(B % A == 0){
                printf("Sao Multiplos\n");
            }else{
                printf("Nao sao Multiplos\n");
            }
        }else{
            printf("Sao Multiplos\n");
        }
    }
    return 0;
}
