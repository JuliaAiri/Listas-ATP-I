/*Programa para armazenar caracteres*/
#include<stdio.h>
int main(){
    int n1, n2, i, j;
    printf("Digite o tamanho da primeira palavra: ");
    scanf("%d",&n1);
    printf("\nDigite o tamanho da segunda palavra: ");
    scanf("%d",&n2);
    char vetor1[n1 + n2], vetor2[n2];
    for(i=0; i<n1; i++){
        printf("\nDigite o termo %d da primeira palavra: ", i+1);
        fflush(stdin);
        scanf(" %c",&vetor1[i]);
    }
    printf("\nPrimeira Palavra: ");
    for(i=0; i<n1; i++){
        printf("%c",vetor1[i]);
    }
    for(j=0; j<n2; j++){
        printf("\nDigite o termo %d da segunda palavra: ", j+1);
        fflush(stdin);
        scanf(" %c",&vetor2[j]);
    }
    printf("\nSegunda Palavra: ");
    for(j=0; j<n2; j++){
        printf("%c",vetor2[j]);
    }
    j = 0;
    for(i=n1; i<(n1+n2); i++){
        vetor1[i] = vetor2[j];
        j++;
    }
    printf("\nPalavra concatenada: ");
    for(i=0; i<(n1+n2); i++){
        printf("%c",vetor1[i]);
    }
    return 0;
}
