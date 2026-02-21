/*Programa para ler n valores em um vetor*/
#include<stdio.h>
int main(){
    int i, n;
    printf("Digite um numero de elementos: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("\nDigite o valor %d: ", i+1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<n; i++){
        printf("\nVetor %d: %d", i+1, vetor[i]);
    }
    return 0;
}
