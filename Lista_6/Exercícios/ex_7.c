/*Programa para ler numero do mes*/
#include<stdio.h>
int main(){
    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d",&mes);
    if(mes==1){
        printf("Nome: Janeiro");
    }else{
        if(mes==2){
            printf("Nome: Fevereiro");
        }else{
            if(mes==3){
                printf("Nome: Marco");
            }else{
                if(mes==4){
                    printf("Nome: Abril");
                }else{
                    if(mes==5){
                        printf("Nome: Maio");
                    }else{
                        if(mes==6){
                            printf("Nome: Junho");
                        }else{
                            if(mes==7){
                                printf("Nome: Julho");
                            }else{
                                if(mes==8){
                                    printf("Nome: Agosto");
                                }else{
                                    if(mes==9){
                                        printf("Nome: Setembro");
                                    }else{
                                        if(mes==10){
                                            printf("Nome: Outubro");
                                        }else{
                                            if(mes==11){
                                                printf("Nome: Novembro");
                                            }else{
                                                if(mes==12){
                                                    printf("Nome: Dezembro");
                                                }else{
                                                    printf("Invalido");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
