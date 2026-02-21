/*Programa para ler reajuste de salário*/
#include<stdio.h>
int main(){
    float salario, reajuste1, reajuste2;
    printf("Digite seu Salario: ");
    scanf("%f",&salario);
    if(salario<=1000){
        reajuste1 = salario + (salario * 0.2);
        printf("Este e o seu novo salario: %f",reajuste1);
    }else{
        if(salario<=2000){
            reajuste2 = salario + (salario * 0.1);
            printf("Este e seu novo salario: %f",reajuste2);
        }else{
            printf("O seu salario nao havera reajuste");
        }
    }
     return 0;
}
