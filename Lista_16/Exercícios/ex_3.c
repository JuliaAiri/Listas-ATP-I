/*Programa para fazer fatorial*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int fatorial(int n){
    int resultado, i, cont=1;
    for(i=2; i<=n; i++){
        cont = cont * i;
    }
    resultado = cont;
    return resultado;
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("Fatorial: %d", fatorial(num));
    return 0;
}
