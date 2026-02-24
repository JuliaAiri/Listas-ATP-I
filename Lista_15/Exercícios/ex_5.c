/*Programa para concatenar palavras*/
#include<stdio.h>
#include<string.h>
int main(){
    char string1[50], string2[50];
    char concat[100] = "";
    printf("Digite a primeira palavra: ");
    gets(string1);
    strcat(concat, string1);
    printf("Digite a segunda palavra: ");
    gets(string2);
    strcat(concat, string2);
    printf("Palavra concatenada: %s\n", concat);
    return 0;
}
