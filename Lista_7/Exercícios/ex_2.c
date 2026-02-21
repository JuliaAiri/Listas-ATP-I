/*Ler data de hoje e saber a idade da pessoa*/
#include<stdio.h>
int main(){
    int diaat, mesat, anoat, dia, mes, ano, idade;
    printf("Digite o dia atual: ");
    scanf("%d",&diaat);
    printf("Digite o mes atual: ");
    scanf("%d",&mesat);
    printf("Digite o ano atual: ");
    scanf("%d",&anoat);
    printf("Digite o dia do seu nascimento: ");
    scanf("%d",&dia);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d",&mes);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&ano);
    if(mesat>mes){
        idade = anoat - ano;
        printf("Esta e sua idade: %d",idade);
    }else{
        if(mesat==mes){
            if(diaat>=dia){
                idade = anoat - ano;
                printf("Esta e sua idade: %d",idade);
            }else{
                idade = (anoat - 1) - ano;
                printf("Esta e sua idade: %d",idade);
            }
        }else{
                idade = (anoat - 1) - ano;
                printf("Esta e sua idade: %d",idade);
            }
        }
        return 0;
    }

