/*Programa para concatenar strings*/
#include<stdio.h>
int main(){
    char string1[200], string2[100];
    int i, num=0, o=0;
    printf("Digite a primeira palavra: ");
    fgets(string1, 200, stdin);
    printf("Digite a segunda palavra: ");
    fgets(string2, 100, stdin);
    for(i=0; string1[i]!= '\0' && string1[i]!= '\n'; i++){
      num = num + 1;
    }
    for(i=num; string2[o]!= '\0' && string2[o]!= '\n'; i++){
        string1[i] = string2[o];
        o = o + 1;
    }
    printf("Palavra concatenada: %s",string1);
    return 0;
}
