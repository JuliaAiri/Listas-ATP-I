/*Programa para verificar se os vetores sao iguais ou diferentes*/
#include<stdio.h>
int main(){
    int n, i, h = 1;
    printf("Digite o tamanho do vetores: ");
    scanf("%d",&n);
    int vetor1[n], vetor2[n];
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do Vetor1: ",i+1);
        scanf("%d",&vetor1[i]);
    }
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do Vetor2: ",i+1);
        scanf("%d",&vetor2[i]);
    }
    for(i=0; i<n && h == 1; i++){
        if(vetor1[i]==vetor2[i]){
            h = 1;
        }else{
            h = 0;
        }
    }
    if(h==1){
        printf("\nOs vetores sao iguais!");
    }else{
        printf("\nOs vetores sao diferentes!");
    }
    return 0;
}

