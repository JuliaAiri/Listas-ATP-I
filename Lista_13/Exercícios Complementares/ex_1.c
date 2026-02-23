/*Programa para armazenar booleana*/
#include<stdio.h>
int main(){
    int n, i, valor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("Digite o valor 1 ou 0: ");
        scanf("%d",&valor);
        if(valor==1 || valor==0){
            vetor[i] = valor;
        }else{
            printf("Valor invalido");
            return 0;
        }
    }
    printf("Entrada: ");
    for(i=0; i<n; i++){
        printf("%d\t",vetor[i]);
    }
    for(i=0; i<n; i++){
      if(vetor[i]==0){
        vetor[i] = 1;
      }
    }
    printf("Saida: ");
    for(i=0; i<n; i++){
        printf("%d\t", vetor[i]);
    }
    return 0;
}
