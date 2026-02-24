/*Programa para resolver crime*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n, i, j, a, b;
    char mensagem[100], escondido[100], real[100];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++){
        fgets(mensagem, 100, stdin);
        a = 0;
        for(j=0; mensagem[j]!='\0'; j++){
            switch(mensagem[j]){
            case 'a' ... 'z':
                escondido[a] = mensagem[j];
                a++;
            }
        }
        escondido[a] = '\0';
        a--;
        for(b=0; escondido[a]>=0; b++){
            real[b] = escondido[a];
            a--;
        }
        real[b] = '\0';
        printf("%s\n", real);
    }
    return 0;
}
