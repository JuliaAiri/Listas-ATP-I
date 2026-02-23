/*Programa para apresentar 2 vetores e a diferenca com a media*/
#include<stdio.h>
int main(){
    int n, i, soma=0, media;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do primeiro vetor: ",i+1);
        scanf("%d",&vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Vetor original (vetor1): ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    media = soma / n;
    printf("\nMedia: %d", media);
    for(i=0; i<n; i++){
        vetor[i] = vetor[i] - media;
    }
    printf("\nNovo vetor: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    return 0;
}
