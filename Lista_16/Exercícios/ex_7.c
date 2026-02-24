/*Programa para por caracteres em maiusculo*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void maiusculo(char palavra[]){
    int i;
    for(i=0; palavra[i]!= '\0'; i++){
        switch(palavra[i]){
        case 'A' ... 'Z':
            break;
        case 'a' ... 'z':
            palavra[i] = palavra[i] - 32;
            break;
        case '\n':
            palavra[i] = '\0';
            break;
        }
    }
}


int main(){
    char vetor[100];
    printf("Digite uma palavra: ");
    fgets(vetor, 100, stdin);
    maiusculo(vetor);
    printf("Palavra alterada: %s", vetor);
    return 0;
}
