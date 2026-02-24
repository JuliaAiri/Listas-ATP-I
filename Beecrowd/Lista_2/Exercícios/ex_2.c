/*Programa para calcular sem o zero*/

#include<stdio.h>
#include<string.h>

int main(){
    int n1=1, n2=1, soma, i;
    char extenso[100];
    while(n1!=0 &&n2!=0){
        scanf("%d  %d", &n1, &n2);
        soma = n1 + n2;
        sprintf(extenso, "%d", soma);
        for(i=0; i<strlen(extenso); i++){
            if(extenso[i]!='0'){
            printf("%c", extenso[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
