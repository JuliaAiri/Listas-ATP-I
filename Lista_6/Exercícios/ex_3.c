/*Programa para calcular emprestimo válido*/
#include<stdio.h>
int main(){
    float salario, emprestimo;
    printf("Digite o valor do seu salario: ");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f",&emprestimo);
    if(emprestimo>0.2*salario){
        printf("EMPRESTIMO NAO CONCEDIDO");
    }else{
        printf("EMPRESTIMO CONCEDIDO");
    }
    return 0;
}
