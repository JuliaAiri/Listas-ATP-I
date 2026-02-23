/*Programa para contabilizar algarismos*/
#include<stdio.h>
int main(){
    int num=0, i;
    char vetor[6];
    printf("Digite um numero: ");
    fgets(vetor, 6, stdin);
    for(i=0; vetor[i]!= '\0' && vetor[i]!='\n';i++){
        num++;
    }
    if(vetor[i]=='\n'){
        vetor[i] = '\0';
    }
    printf("Vetor: %s -> %d", vetor, num);
    return 0;
}

