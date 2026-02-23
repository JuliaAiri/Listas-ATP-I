/*Programa para subsituição de números*/
#include<stdio.h>
int main(){
    int n, i, n1, n2;
    printf("Quantos valores serao digitados?: ");
    scanf("%d",&n);
    int vetor [n];
    for(i=0; i<n; i++){
        printf("\nVetor %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\nDigite o valor de N1: ");
    scanf("%d",&n1);
    printf("Digite o valor de N2: ");
    scanf("%d",&n2);
    for(i=0; i<n; i++){
        if(n1==vetor[i]){
            vetor[i] = n2;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}
