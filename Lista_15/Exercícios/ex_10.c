/*Programa para somar numeros entre virgulas*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

char og[100], temp[100];
int i,j=0, tam, soma=0;

printf("insira os numeros: ");
fgets(og, 100, stdin);

tam = strlen(og);

for(i=0; i<tam-1; i++){
    temp[j]=og[i];
    j++;
    if (og[i+1] == ','){
        temp[j]='\0';
        soma = soma + atoi(temp);
        strcpy(temp,"");
        j=0;
        i++;
    }
    if (og[i+1] == '\n'){
    temp[j]='\0';
        soma = soma + atoi(temp);
        strcpy(temp,"");
        j=0;
        i++;
        }
}

printf("Soma: %d", soma);
return 0;
}
