/*Programa para copiar strings*/
#include<stdio.h>
int main(){
    char palavra[100], palavra2[100];
    int i, num = 0, h;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0' && palavra[i]!= '\n'; i++){
      palavra2[i] = palavra[i];
    }
    palavra2[i] = '\0';
    printf("String Original: %s\nString Copiada: %s",palavra, palavra2);
    return 0;
}
