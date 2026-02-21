/*Programa para ler n valores em um vetor e imprimi-los na ordem contrária*/
#include<stdio.h>
int main(){
   int n, i, valor, o;
   printf("Digite um N: ");
   scanf("%d",&n);
   int vetor[n];
   o = n;
   for(i=0; i<n; i++){
    printf("\nDigite valores: ");
    scanf("%d",&valor);
    vetor[o-1] = valor;
    o = o - 1;
   }
   for(i=0; i<n; i++){
    printf("\nVetor %d: %d", i, vetor[i]);
   }
   return 0;
}
