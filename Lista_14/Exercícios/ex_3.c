/*Programa para contabilizar vogais*/
#include<stdio.h>
int main(){
    char palavra[100];
    int i, va=0, ve=0, vi=0, vo=0, vu=0;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    for(i=0; palavra[i]!= '\0'; i++){
    switch(palavra[i]){
        case 'a':
        va = va + 1;
        break;
        case 'e':
        ve = ve + 1;
        break;
        case 'i':
        vi = vi + 1;
        break;
        case 'o':
        vo = vo + 1;
        break;
        case 'u':
        vu = vu + 1;
        break;
    }
    }
    printf("Vogais presentes:\nVogal A: %d\nVogal E:%d\nVogal I: %d\nVogal O: %d\nVogal U: %d", va, ve, vi ,vo, vu);
    return 0;
}
