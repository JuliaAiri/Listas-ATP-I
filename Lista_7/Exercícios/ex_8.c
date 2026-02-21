/*Programa para ler tres numeros inteiros e coloca-los em ordem crescente*/
#include<stdio.h>
int main(){
    int numero1, numero2, numero3;
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&numero3);
    if(numero1>numero2 && numero2>numero3){
        printf("Em ordem crescente: %d\t %d\t %d",numero3, numero2, numero1);
    }else{
        if(numero1>numero3 && numero3>numero2){
            printf("Em ordem crescente: %d\t %d\t %d",numero2, numero3, numero1);
        }else{
            if(numero2>numero1 && numero1>numero3){
                printf("Em ordem crescente: %d\t %d\t %d",numero3, numero1, numero2);
            }else{
                if(numero2>numero3 && numero3>numero1){
                    printf("Em ordem crescente: %d\t %d\t %d",numero1, numero3, numero2);
                }else{
                    if(numero3>numero1 && numero1>numero2){
                        printf("Em ordem crescente: %d\t %d\t %d",numero2, numero1, numero3);
                    }else{
                        if(numero3>numero2 && numero2>numero1){
                            printf("Em ordem crescente: %d\t %d\t %d",numero1, numero2, numero3);
                        }else{
                            if(numero1>numero2 && numero2==numero3){
                                printf("Em ordem crescente: %d\t %d\t %d",numero2, numero3, numero1);
                            }else{
                                if(numero2>numero1 && numero1==numero3){
                                    printf("Em ordem crescente: %d\t %d\t %d",numero1, numero3, numero2);
                                }else{
                                    if(numero3>numero1 && numero1==numero2){
                                        printf("Em ordem crescente: %d\t %d\t %d",numero2, numero1, numero3);
                                    }else{
                                        printf("Os valores sao iguais\n");
                                        printf("Em ordem crescente: %d\t %d\t %d", numero1, numero2, numero3);
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
