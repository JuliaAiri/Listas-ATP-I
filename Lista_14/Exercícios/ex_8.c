/*Programa para imprimir palavras ao contrario*/
#include<stdio.h>
int main(){
    char palavra[100], contraria[100];
    int i, num=0, o;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0'; i++){
    switch (palavra[i]){
    case 'a' ... 'z':
        num = num + 1;
    }
    }
    o = num - 1;
    for(i=0; i<num; i++){
        contraria[i] = palavra[o];
        o = o - 1;
    }
    printf("Nova palavra: %s", contraria);
    return 0;
}
