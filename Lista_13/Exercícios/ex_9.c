/*Programa para armazenar 10 numeros diferentes*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i=0, valor, vetor1[10], j=0, vetor2[10], num;
    while(i==0){
      printf("Digite o valor 1: ");
    scanf("%d",&vetor1[i]);
    vetor2[j] = vetor1[i];
    i = i + 1;
    }
    for(i=1; i<10; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d",&vetor1[i]);
        j = j + 1;
        vetor2[j] = vetor1[i];
            for(j=0; j<i; j++){
                    if(vetor1[i]==vetor2[j]){
                        printf("Digite um novo valor: ");
                        scanf("%d",&num);
                        vetor1[i] = num;
                    }
}
    }
    for(i=0; i<10; i++){
        printf("Vetor %d: %d\n",i, vetor1[i]);
    }
return 0;
}
