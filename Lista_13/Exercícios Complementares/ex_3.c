/*Programa para impor limites e substituicao*/
#include<stdio.h>
int main(){
    int n, i, valor, limite, sub;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite valor %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("Vetor: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    printf("\nQual o limite?: ");
    scanf("%d",&limite);
    printf("\nSubstituicao por qual valor: ");
    scanf("%d",&sub);
    for(i=0; i<n; i++){
        if(vetor[i]>limite){
            vetor[i] = sub;
        }
    }
    printf("\nVetor resultante: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    return 0;
}

