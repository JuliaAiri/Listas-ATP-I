/*Programa para ver se é menor ou maior de idade*/
#include<stdio.h>
int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d",&idade);
    if(idade>=18){
        printf("MAIOR");
    }else{
        printf("MENOR");
    }
      return 0;
}
