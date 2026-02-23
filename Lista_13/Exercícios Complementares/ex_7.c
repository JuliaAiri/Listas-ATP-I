/*Programa para copiar vetores*/
#include<stdio.h>
int main(){
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor1[n], vetor2[n];
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do primeiro vetor: ",i+1);
        scanf("%d",&vetor1[i]);
    }
    printf("Vetor original (vetor1): ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor1[i]);
    }
    for(i=0; i<n; i++){
        vetor2[i] = vetor1[i];
    }
    printf("\nVetor copiado (vetor2): ");
    for(i=0; i<n; i++){
        printf("%d\t", vetor2[i]);
    }
    return 0;
}

