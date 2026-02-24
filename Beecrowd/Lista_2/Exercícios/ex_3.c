/*Programa para verificar risadas*/


#include<stdio.h>
#include<string.h>

int main(){
    char vetor1[50], vetor2[50], caractere, copia[50];
    int j=0, i, o, cont=0, comparacao, h=0;
    fgets(vetor1, 50, stdin);
    for(i=0; vetor1[i]!= '\0' && vetor1[i]!= '\n'; i++){
        switch(vetor1[i]){
    case 'a': case 'e': case 'i': case 'o': case 'u':
        vetor2[j] = vetor1[i];
        j++;
        cont= cont + 1;
        h = 1;
        }
    }
    if(h==1){
    vetor2[j] = '\0';
    i = 0;
    for(o=(cont - 1); o>=0; o--){
        copia[i] = vetor2[o];
        i++;
    }
    copia[i] = '\0';
    comparacao = strcmp(vetor2, copia);
    if(comparacao==0){
        caractere = 'S';
    }else{
        caractere = 'N';
    }
    printf("%c\n", caractere);
    }else{
        printf("Risada invalida\n");
    }
    return 0;
}

