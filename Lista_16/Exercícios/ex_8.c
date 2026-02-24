/*Programa para centralizar caracteres*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

char centralizar(char string[], int parametro){
    int tamanho, i;
    tamanho = strlen(string);
    if(tamanho==parametro){
        printf("%s\n", string);
    }else{
        if(tamanho>parametro){
            parametro = tamanho;
            printf("%s\n", string);
        }else{
            if(tamanho<parametro){
            if(tamanho%2==0 && parametro%2==0){
                for(i=0; i<((parametro - tamanho) / 2); i++){
                    printf(" ");
                }
                printf("%s\n",string);

            }else{
                if((tamanho%2==0 && parametro%2!=0) || (tamanho%2!=0 && parametro%2==0)){
                    for(i=0; i<(((parametro - tamanho) / 2)+1); i++){
                        printf(" ");
                    }
                    printf("%s\n",string);
                }else{
                    if(tamanho%2!=0 && parametro%2!=0){
                        for(i=0; i<((parametro - tamanho) / 2); i++ ){
                            printf(" ");
                        }
                        printf("%s\n",string);
                    }
                }
                }
            }
        }
    }
}

int main(){
    char vetor1[20], vetor2[20], vetor3[20], vetor4[20], vetor5[20];
    int elementos;
    printf("Digite o parametro: ");
    scanf("%d",&elementos);
    getchar();
    printf("Digite primeiro vetor: ");
    gets(vetor1);
    printf("Digite segundo vetor: ");
    gets(vetor2);
    printf("Digite terceiro vetor: ");
    gets(vetor3);
    printf("Digite quarto vetor: ");
    gets(vetor4);
    printf("Digite quinto vetor: ");
    gets(vetor5);
    centralizar(vetor1, elementos);
    centralizar(vetor2, elementos);
    centralizar(vetor3, elementos);
    centralizar(vetor4, elementos);
    centralizar(vetor5, elementos);

    return 0;
}
