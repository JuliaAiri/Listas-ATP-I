/*Programa para verificar pares e impares*/
#include<stdio.h>
int main(){
    int n, i, par=0, impar=0, valor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite valores: ");
        scanf("%d",&valor);
        if(valor % 2 == 0){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
        vetor[i] = valor;
    }
    printf("Vetor: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    printf("\nQuantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d", impar);
    return 0;
}
