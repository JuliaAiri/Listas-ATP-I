/*Programa para verificar somente digitos*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int digito(char string[]){
    int i, resultado=1;
    for(i=0; string[i]!= '\0' && string[i]!= '\n'; i++){
        switch(string[i]){
            case 'a' ... 'z':
            resultado = 0;
            break;
        }
    }
    return resultado;
}


int main(){
    char vetor[100];
    int resultado;
    printf("Digite uma palavra: ");
    fgets(vetor, 100, stdin);
    resultado = digito(vetor);
    if(resultado==1){
        printf("Verificacao: Verdadeiro! Possui somente digitos");
    }else{
        if(resultado==0){
            printf("Verificacao: Falso! Possui caracteres");
        }
    }
    return 0;
}
