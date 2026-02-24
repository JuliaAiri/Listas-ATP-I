/*Programa para consertar espacos*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void remover_espacos(char string[]){
    int i, j;
    for(i=0; string[i]!= '\0' && string[i]!= '\n'; i++){
        if(string[i]==' '){
            if(string[i+1]==' '){
                for(j=i+1; string[j]!=' '; j++){
                    string[j] = string[j+1];
                }
            }
        }
    }
}

int main(){
    char vetor[100];
    printf("Digite uma palavra: ");
    fgets(vetor, 100, stdin);
    remover_espacos(vetor);
    printf("Frase alterada: %s", vetor);
    return 0;
}
