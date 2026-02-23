/*Programa para substituir letras*/
#include<stdio.h>
int main(){
    char palavra[100], L1, L2;
    int i;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    printf("Digite uma letra que esta contida na palavra: ");
    scanf(" %c",&L1);
    printf("Digite a letra substituta: ");
    scanf(" %c",&L2);
    for(i=0; palavra[i]!= '\0'; i++){
    if(palavra[i]==L1){
        palavra[i] = L2;
    }
    }
    printf("Nova string: %s", palavra);
    return 0;
}
