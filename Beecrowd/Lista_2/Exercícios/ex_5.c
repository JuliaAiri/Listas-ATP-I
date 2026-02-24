
/*Programa para resolver problema de Evergreen*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n, i, a, b, c=0, d=0, j, k;
    char primeira_linha[100], segunda_linha[100];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++){
        c = 0;
        d = 0;
        fgets(primeira_linha, 100, stdin);
        fgets(segunda_linha, 100, stdin);
        for(k=0; segunda_linha[k]!='\0'; k++){
            if(segunda_linha[k]=='\n'){
                segunda_linha[k] = '\0';
            }
        }
        for(j=0; primeira_linha[c]!='\0'; j++){
        if(primeira_linha[j]=='\n'){
            primeira_linha[j]='\0';
           }
        for(a=0; a<2; a++){
            printf("%c",primeira_linha[c]);
            c++;
        }
        for(b=0; b<2; b++){
            printf("%c",segunda_linha[d]);
            d++;
        }
        }
        printf("\n");
    }
    return 0;
}
