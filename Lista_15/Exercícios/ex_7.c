/*Programa para correcao de letras em inicio de palavra*/
#include<stdio.h>
int main(){
    char string[150];
    int i, h;
    printf("Digite uma frase: ");
    fgets(string, 150, stdin);
    for(i=0; string[i]!='\0'; i++){
        if(i==0){
            switch(string[i]){
                case 'A' ... 'Z':
                break;
                case 'a' ... 'z':
                string[i] = string[i] - 32;
                break;
            }
        }
        if(string[i]== ' '){
            switch(string[i+1]){
                case 'A' ... 'Z':
                break;
                case 'a' ... 'z':
                string[i+1] = string[i+1] - 32;
                break;
            }
        }
    }
    printf("Frase alterada: %s", string);
    return 0;
}
