/*Programa para contabilizar vogais e consoantes*/
#include<stdio.h>
int main(){
    char palavra[100], caractere = '_';
    int i;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0'; i++){
    switch(palavra[i]){
    case 'a': case 'e': case 'i': case 'o': case 'u':
        palavra[i] = caractere;
        break;
    }
    }
    printf("Nova string: %s", palavra);
    return 0;
}

