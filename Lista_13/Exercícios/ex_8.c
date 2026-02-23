/*Programa para gerar primos*/
#include<stdio.h>
int main(){
    int n, i=0, num, j, h=1, o=1;
    printf("Digite quantos elementos requeridos: ");
    scanf("%d",&n);
    int vetor[n];
      while(i<n){
    printf("Digite o valor: ");
    scanf("%d",&num);
    vetor[i] = num;
    i++;
      }
    o = 0;
    for(i=0; i<n; i++){
            h = 1;
            num = vetor[i];
            for(j=2; j<num && h == 1; j++){
               if(num % j == 0){
                h = 0;
               }
            }
        if(h==1){
            printf("Vetor %d: %d\n", o, vetor[i]);
            o = o + 1;
        }
    }
    return 0;
}

