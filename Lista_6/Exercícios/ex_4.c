/*Programa para ler um digito de 1 a 5*/
#include<stdio.h>
int main(){
    int numero;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d",&numero);
    if(numero==1){
        printf("Nome por extenso: Um");
    }else{
        if(numero==2){
            printf("Nome por extenso: Dois");
        }else{
            if(numero==3){
                printf("Nome por extenso: Tres");
            }else{
                if(numero==4){
                    printf("Nome por extenso: Quatro");
                }else{
                    if(numero==5){
                        printf("Nome por extenso: Cinco");
                    }else{
                        printf("Numero invalido");
                    }
                }
            }
        }
    }
      return 0;
}
