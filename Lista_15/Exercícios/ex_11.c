/*Programa para organizar em ordem alfabética*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char palavra[100], copia[100], caractere;
    int i, j, tam, comparacao, h;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    tam = strlen(palavra);
    strcpy(copia, palavra);
    for(i=0; palavra[i]!= '\0' && palavra[i]!= '\n'; i++){
        for(j=i+1; j<=tam; j++){
                if(palavra[i]>copia[j]){
                    caractere = palavra[i];
                    palavra[i] = copia[j];
                    copia[j] = caractere;
                    }
            }
        }
    printf("Palavra organizada: %s", palavra);
    return 0;
}
