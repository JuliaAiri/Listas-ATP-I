/*Programa para armazenar valores positivos em um vetor, e encontrar o maior*/
#include<stdio.h>
int main(){
    int n=1, i=0, j, maior, vetor[1000];
    while(n>0){
    printf("Digite o valor: ");
    scanf("%d",&n);
    if(n>0){
      vetor[i] = n;
        i++;
    }
    }
        for(j=0; j<i; j++){
        if(j==0){
            maior = vetor[j];
        }else{
            if(vetor[j]>maior){
                maior = vetor[j];
            }
        }
    }
    printf("O maior vetor: %d", maior);
    return 0;
}
