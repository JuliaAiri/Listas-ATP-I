/*Programa para validar intervalos*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int validar(float valor, int inicio, int fim){
int resultado;
    if(valor>= inicio && valor<=fim){
        resultado = 1;
    }else{
         resultado = 0;
    }
    return resultado;
}

int main(){
    float num;
    int comeco, fin, resultado;
    printf("Digite um numero: ");
    scanf("%f",&num);
    printf("Digite um inicio de intervalo: ");
    scanf("%d",&comeco);
    printf("Digite o fim de um intervalo: ");
    scanf("%d",&fin);
    resultado = validar(num, comeco, fin);
    if (resultado==1){
        printf("O numero esta dentro do intervalo");
    }else{
        printf("O resultado esta fora do intervalo");
    }
    return 0;
}

