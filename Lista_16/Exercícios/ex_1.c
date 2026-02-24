/*Programa para fazer operacoes*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

float soma(float n1, float n2){
    float adicao;
    adicao = n1 + n2;
    return adicao;
}
float subtracao(float n1, float n2){
    float resultado;
    resultado = n1 - n2;
    return resultado;
}
float multiplicacao(float n1, float n2){
    float produto;
    produto = n1 * n2;
    return produto;
}
float divisao(float n1, float n2){
    float quociente;
    quociente = n1 / n2;
    return quociente;
}
int main(){
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    printf("Soma: %f\nSubtracao: %f\nMultiplicacao: %f\nDivisao: %f", soma(num1, num2), subtracao(num1, num2), multiplicacao(num1, num2), divisao(num1, num2));
    return 0;
}
