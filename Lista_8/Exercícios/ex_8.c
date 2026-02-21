/*Programa para verificar vogal ou consoante*/
#include<stdio.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    switch(letra){
    case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("Vogal");
        break;
    default:
        printf("Consoante");
        break;
    }
    return 0;
}
