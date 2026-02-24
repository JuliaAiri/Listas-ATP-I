/*Programa para transferir variaveis*/
#include<stdio.h>
#include<string.h>
int main(){
    char string1[50], string2[50];
    printf("Digite uma string: ");
    fgets(string1, 50, stdin);
    strcpy(string2, string1);
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    return 0;
}
