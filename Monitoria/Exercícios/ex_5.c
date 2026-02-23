/*Programa para somar os dígitos de um vetor*/
#include<stdio.h>
int main(){
    int n;
    printf("Digite o tamanho do numero: ");
    scanf("%d",&n);
    int vetor[n], i, soma=0;
    for(i=0; i<n; i++){
       printf("Digite o elemento %d: ",i);
       scanf("%d",&vetor[i]);
       soma = soma + vetor[i];
    }
    printf("Soma: %d",soma);
    return 0;
}
