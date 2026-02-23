/*Programa para imprimir em ordem contraria*/
#include<stdio.h>
int main(){
    int n, i, o;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    o = n;
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite valor %d: ",i);
        scanf("%d",&vetor[o - 1]);
        o = o - 1;
    }
    o = n;
    printf("\nVetor: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[o - 1]);
        o = o - 1;
    }
    printf("\nExibicao invertida: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    return 0;
}
