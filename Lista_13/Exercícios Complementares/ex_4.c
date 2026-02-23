/*Programa para substituir valores*/
#include<stdio.h>
int main(){
    int n, i, valor, v1, v2;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite valor %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\nVetor: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    printf("\nValor a substituir: ");
    scanf("%d",&v1);
    printf("\nValor novo: ");
    scanf("%d",&v2);
    for(i=0; i<n; i++){
        if(vetor[i]==v1){
            vetor[i] = v2;
        }
    }
    printf("\nVetor resultante: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    return 0;
}
