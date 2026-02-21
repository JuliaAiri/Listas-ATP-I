/*Programa para calcular data valida*/
#include<stdio.h>
int main(){
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d",&dia);
    printf("Digite o mes: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);
    if(ano %400 ==0 || (ano %4 == 0 && ano%100 !=0)){
        if(dia>=1 && dia<=31 && mes>=1 && mes<=12){
            if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                if(dia>=1 && dia<=31){
                    printf("Data valida");
                }else{
                    printf("Data invalida");
                }
            }else{
                if(mes==4 || mes==6 || mes==9 || mes==11){
                    if(dia>=1 && dia<=30){
                        printf("Data valida");
                    }else{
                        printf("Data invalida");
                    }
                }else{
                    if(mes==2){
                        if(dia>=1 && dia<=29){
                            printf("Data valida");
                        }else{
                            printf("Data invalida");
                        }
                    }
                }
            }
        }else{
            printf("Data invalida");
        }
    }else{
        if(dia>=1 && dia<=31 && mes>=1 && mes<=12){
            if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                if(dia>=1 && dia<=31){
                    printf("Data valida");
                }else{
                    printf("Data invalida");
                }
            }else{
                if(mes==4 || mes==6 || mes==9 || mes==11){
                    if(dia>=1 && dia<=30){
                        printf("Data valida");
                    }else{
                        printf("Data invalida");
                    }
                }else{
                    if(mes==2){
                        if(dia>=1 && dia<=28){
                            printf("Data valida");
                        }else{
                            printf("Data invalida");
                        }
                    }
                }
            }
    }else{
        printf("Data invalida");
    }
}
return 0;
}
