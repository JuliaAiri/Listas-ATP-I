/*Programa para contabilizar vogais e consoantes*/
#include<stdio.h>
int main(){
    char palavra[100];
    int i, vogal = 0, consoante = 0;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0'; i++){
    switch(palavra[i]){
    case 'a': case 'e': case 'i': case 'o': case 'u':
        vogal = vogal + 1;
        break;
    case '\n':
        consoante = consoante - 1;
    default:
        consoante = consoante + 1;
        break;
    }
    }
    printf("Quantidade de vogais: %d\nQuantidade de Consoantes: %d", vogal, consoante);
    return 0;
}
