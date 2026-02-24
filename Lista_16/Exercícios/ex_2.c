/*Programa para fazer tabuada*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int tabuada(int n){
    int i;
    for(i=0; i<=10; i++){
        printf("%d * %d = %d\n", i, n, i * n);
    }
    return tabuada;
}
int main(){
    int num, resultado;
    printf("Digite um numero: ");
    scanf("%d",&num);
    resultado = tabuada(num);
    return 0;
}
