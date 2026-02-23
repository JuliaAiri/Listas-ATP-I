/*Programa para verificar se strings sao iguais ou diferentes*/
#include<stdio.h>
int main(){
    char palavra[100], palavra2[100];
    int i, num = 0, h;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    printf("Digite outra palavra: ");
    fgets(palavra2, 100, stdin);
    for(i=0; palavra[i]!= '\0'; i++){
        if(palavra[i]==palavra2[i]){
            h = 1;
        }else{
            h = 0;
        }
    }
    if(h==1){
        printf("Strings iguais");
    }else{
        if(h==0){
            printf("Strings diferentes");
        }
    }
    return 0;
}
