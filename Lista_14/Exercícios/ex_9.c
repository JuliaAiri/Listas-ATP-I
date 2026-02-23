/*Programa para verificar quantos elementos tem uma string*/
#include<stdio.h>
int main(){
    char palavra[100];
    int i, num = 0;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0' && palavra[i]!= '\n'; i++){
        num = num + 1;
    }
    printf("Tamanho da string: %d", num);
    return 0;
}
