/*Programa para receber maior e menor elemento*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void maior_menor(char string[], char *maior, char *menor){
    int i;
    for(i=0; string[i]!='\0' && string[i]!='\n'; i++){
        if(i==0){
            *maior = string[i];
            *menor = string[i];
        }else{
            if(string[i]>*maior){
                *maior = string[i];
            }else{
                if(string[i]<*menor){
                    *menor = string[i];
                }
            }
        }
    }
}

int main(){
    char vetor[100], grande, pequena;
    printf("Digite uma string: ");
    fgets(vetor, 100, stdin);
    maior_menor(vetor, &grande, &pequena);
    printf("Maior letra: %c\nMenor letra: %c", grande, pequena);
    return 0;
}
