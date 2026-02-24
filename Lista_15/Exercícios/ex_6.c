/*Programa para colocar as palavras em maiusculo*/
#include<stdio.h>
#include<string.h>
int main(){
    char string[50];
    int i, h;
    printf("Digite a frase: ");
    fgets(string, 50, stdin);
    for(i=0; string[i]!= '\0' && string[i]!= '\n'; i++){
    switch(string[i]){
    case 'A' ... 'Z':
        break;
    case 'a' ... 'z':
        string[i] = string[i] - 32;
        break;
    }
    }
    printf("Frase alterada: %s\n", string);
    return 0;
}
