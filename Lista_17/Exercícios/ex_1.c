/*Programa para calcular fatorial*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void fatorial(int n, int *fat){
    int i, cont=1;
    for(i=2; i<=n; i++){
        cont = cont * i;
    }
    *fat = cont;
}

int main(){
    int resultado, num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    fatorial(num, &resultado);
    printf("Fatorial: %d", resultado);
    return 0;
}

