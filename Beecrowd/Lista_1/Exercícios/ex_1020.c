/*Programa para calcular a idade em dias*/
#include<stdio.h>
int main(){
    int dias, mes, ano;
    scanf("%d",&dias);
    if(dias>=30 && dias<365){
        mes = dias / 30;
        printf("0 ano(s)\n");
        printf("%d mes(es)\n",mes);
        printf("%d dia(s)\n", dias % 30);
    }else{
        if(dias>=365){
            ano = dias / 365;
            if(dias % 365 < 30){
                printf("%d ano(s)\n", ano);
                printf("0 mes(es)\n");
                printf("%d dia(s)\n", dias % 365);
            }else{
                if(dias % 365 >=30){
                    mes = (dias % 365) / 30;
                    printf("%d ano(s)\n", ano);
                    printf("%d mes(es)\n", mes);
                    printf("%d dia(s)\n", dias - (365 * ano) - (30 * mes));
                }
            }
        }
    }
    return 0;
}
