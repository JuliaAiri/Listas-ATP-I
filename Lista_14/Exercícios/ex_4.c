/*Programa para subsituir valores em binario*/
#include<stdio.h>
int main(){
    char numero[100];
    int i, h=1;
    printf("Digite um numero em binario: ");
    fgets(numero, 100, stdin);
    for(i=0; numero[i]!= '\0' && h == 1; i++){
    if(numero[i]=='1'||numero[i]=='0'){
        if(numero[i]=='1'){
            numero[i] = '0';
        }else{
            if(numero[i]=='0'){
                numero[i] = '1';
            }
        }
    }else{
        if(numero[i]!='\n'){
        printf("Numero invalido");
        h = 0;
    }
    }
    }
    if(h==1){
    printf("Nova string: %s", numero);
    }
    return 0;
}
