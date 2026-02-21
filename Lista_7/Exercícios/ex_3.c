/*Programa para ler nota e frequencia de aluno*/
#include<stdio.h>
int main(){
    float frequencia, media;
    printf("Digite sua media: ");
    scanf("%f",&media);
    printf("Digite a sua frequencia: ");
    scanf("%f",&frequencia);
    if(media>=0 && media<=10 && frequencia>=0 && frequencia<=100){
        if(media>5 && frequencia>70){
            printf("Aprovado");
        }else{
            if(media>=3 && media<=5 && frequencia>70){
                printf("Exame");
            }else{
                if (media<3 || frequencia<=70){
                    printf("Reprovado");
                }
        }
    }
}else{
    printf("Valores invalidos");
}
return 0;
}
