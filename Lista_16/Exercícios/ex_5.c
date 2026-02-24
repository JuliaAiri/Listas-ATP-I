/*Programa para fazer menu*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int menu(){
    int opcao;
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
    scanf(“%d”,&opcao);
    return opcao;
}

int main(){
    int opcao, n1, n2;
    menu();
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    printf("Digite uma opcao: ");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
        printf("Resultado: %d", n1 + n2);
        break;
        case 2:
        printf("Resultado: %d", n1 - n2);
        break;
        case 3:
        printf("Resultado: %d", n1 * n2);
        break;
        case 4:
        printf("Resultado: %d", n1 / n2);
        break;
        case 5:
        break;
        return 0;
    }
    return 0;
}

