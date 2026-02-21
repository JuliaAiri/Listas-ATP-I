/*Programa para fazer operacoes*/
 #include<stdio.h>
 int main(){
    float num1, num2;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("Digite a operacao: ");
    scanf("%c",&op);
    switch(op){
    case '+':    //aspas simples, pois o caractere unico
        printf("Soma: %f + %f: %f",num1, num2, num1 + num2);
        break;
    case '-':
        printf("Subtracao: %f - %f: %f", num1, num2, num1 - num2);
        break;
    case '/':
        printf("Divisao: %f / %f: %f", num1, num2, num1 / num2);
        break;
    case '*':
        printf("Multiplicacao: %f * %f: %f", num1, num2, num1 * num2);
        break;
    default:
        printf("Operacao invalida");
        break;
    }
    return 0;
 }
