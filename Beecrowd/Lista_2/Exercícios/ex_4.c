/*Programa com calculadora*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n, i, j, soma=0, o, a, num;
    char vetor[14], copia[14];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++){
        soma = 0;
        num = 0;
        fgets(vetor, 14, stdin);
        for(j=0; vetor[j]!='\0';j++){
            switch(vetor[j]){
            case '0' ... '9':
                num = num * 10 + (vetor[j] - '0');
                break;
        case 'A' ... 'Z': case 'a' ... 'z':
            soma = soma + num;
            num = 0;
            break;
        }
        }
        soma = soma + num;
        printf("%d\n", soma);
        getchar();
        }
    return 0;
}
