/*Programa para retornar vogais e consoantes*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void contagem(char *string, int *vogal, int *consoantes, int *digitos){
    int i, v=0, c=0, d=0;
    for(i=0; string[i]!='\0' && string[i]!='\n'; i++){
        switch(string[i]){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            v = v + 1;
            break;
        case '0' ... '9':
            d = d + 1;
            break;
        default:
            c = c + 1;
            break;
        }
    }
    *vogal = v;
    *consoantes = c;
    *digitos = d;
}


int main(){
    char vetor[100];
    int vogais, consoante, numeros;
    printf("Digite uma string: ");
    fgets(vetor, 100, stdin);
    contagem(vetor, &vogais, &consoante, &numeros);
    printf("Quantidade de Vogais: %d\nQuantidade de consoantes: %d\nQuantidade de numeros: %d", vogais, consoante, numeros);
    return 0;
}
