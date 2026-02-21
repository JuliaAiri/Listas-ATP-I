/*Programa para ver se aluno passou de acordo com a média*/
#include<stdio.h>
int main(){
    float nota1, nota2, media;
    printf("Digite a Primeira Nota: ");
    scanf("%f",&nota1);
    printf("Digite a Segunda Nota: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2) / 2;
    if(media>=5){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
    return 0;
}
