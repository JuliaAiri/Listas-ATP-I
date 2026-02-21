/*Programa para verificar lista de valores*/
#include<stdio.h>
int main(){
    int n, i, valor, num, h=1;
    printf("Digite quantos elementos tera a lista: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
        printf("\nDigite um item da lista: ");
        scanf("%d",&valor);
        vetor[i] = valor;
    }
    printf("\nDigite um numero: ");
    scanf("%d",&num);
    for(i=0; i<n && h==1; i++){
        if(num==vetor[i]){
            printf("\nO numero esta na lista");
            h = 0;
        }
    }
    if(h==1){
        printf("\nO numero nao esta na lista");
    }
    printf("\nA lista: ");
    for(i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}
