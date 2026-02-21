/*Programa para calcular uma conta*/
#include<stdio.h>
int main(){
    float numero1, numero2, resultado;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    fflush(stdin);
    printf("Digite a operacao: ");
    scanf("%c",&operacao);
    if(operacao=='+'){
        printf("Resultado: %f + %f = %f",numero1, numero2, numero1 + numero2);
    }else{
        if(operacao=='-'){
            printf("Resultado %f - %f = %f",numero1, numero2, numero1 - numero2);
        }else{
            if(operacao=='*'){
                printf("Resultado %f * %f = %f", numero1, numero2, numero1 * numero2);
            }else{
                if(operacao=='/'){
                    printf("Resultado %f / %f = %f", numero1, numero2, numero1 / numero2);
                }
            }
        }
    }
    return 0;
}
