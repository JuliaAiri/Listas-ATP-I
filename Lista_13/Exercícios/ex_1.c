/*Programa para ler 5 valores em um vetor*/
#include<stdio.h>
int main(){
    int i;
    float vetor[5];
    for(i=0; i<5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f",&vetor[i]);
    }
    for(i=0; i<5; i++){
        printf("\nVetor %d: %f", i+1, vetor[i]);
    }
    return 0;
}
