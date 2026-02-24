/*Programa para calcular linguas faladas*/


#include<stdio.h>
#include<string.h>

int main(){
    int n, k, i, comparacao, j, b, h=1;
    char lingua1[20], lingua2[20];
    scanf("%d",&n);
    for(i=0; i<n; i++){
    scanf("%d",&k);
    getchar();
    fgets(lingua1, 20, stdin);
    for(b=0; b<(k-1); b++){
        fgets(lingua2, 20, stdin);
        comparacao = strcmp(lingua1, lingua2);
        if(comparacao!=0){
           strcpy(lingua1,"ingles\n");
        }
    }
    printf("%s", lingua1);
    }
    return 0;
}
