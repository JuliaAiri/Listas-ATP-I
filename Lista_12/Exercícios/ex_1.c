/*Programa para fazer leitura de numeros ate o negativo aparecer*/
#include<stdio.h>
#include<limits.h>
int main(){
    int num, i, maior, menor;
    printf("INT_MAX: %d\n",INT_MAX);
   printf("INT_MIN: %d\n\n",INT_MIN);
   printf("Digite numero: ");
   scanf("%d",&num);
   maior = num;
    num = i;
    for (num=i; num>=0; i++){
        printf("Digite numero: ");
        scanf("%d",&num);
        if(num>maior){
            maior = num;
        }else{
            if(num<menor){
                menor = num;
            }
        }
    }
    printf("Maior valor: %d\nMenor valor: %d",maior,menor);
    return 0;
}
