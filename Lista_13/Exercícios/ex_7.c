/*Programa para gerar numeros aleatorios*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, num;
    printf("Digite quantos elementos serao digitados: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0; i<n; i++){
            num = (rand() % 6) + 1;
        printf("%d ", num);
    switch(num){
    case 1:
        n1 = n1 + 1;
        break;
        case 2:
        n2 = n2 + 1;
        break;
        case 3:
        n3 = n3 + 1;
        break;
        case 4:
        n4 = n4 + 1;
        break;
        case 5:
        n5 = n5 + 1;
        break;
        case 6:
        n6 = n6 + 1;
        break;
    }
    }
    printf("\nNumero 1: %d\nNumero 2: %d\nNumero 3: %d\nNumero 4: %d\nNumero 5: %d\nNumero 6: %d",n1, n2, n3,n4,n5,n6);
    return 0;
    }
