/*Programa para calcular o tamanho de uma string*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int tamanho(char string[]){
int resultado;
resultado = strlen(string);
return resultado;
}

int main(){
    char vetor[100];
    printf("Digite uma string: ");
    gets(vetor);
    printf("Tamanho: %d",tamanho(vetor));
    return 0;
}
