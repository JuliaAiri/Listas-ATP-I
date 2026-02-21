/*Programa para fazer menu de opcoes*/
#include<stdio.h>
int main(){
    double num1, num2, i;
    int opcao=0;
    for(i=0; opcao !=5; i++){
        printf("MENU\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        scanf("%d",&opcao);
        switch(opcao){
        case 1:
            printf("Digite o numero1: ");
            scanf("%lf",&num1);
            printf("Digite o numero2: ");
            scanf("%lf",&num2);
            printf("Soma: %f\n",num1 + num2);
            break;
        case 2:
            printf("Digite o numero1: ");
            scanf("%lf",&num1);
            printf("Digite o numero2: ");
            scanf("%lf",&num2);
            printf("Subtracao: %f\n",num1 - num2);
            break;
        case 3:
            printf("Digite o numero1: ");
            scanf("%lf",&num1);
            printf("Digite o numero2: ");
            scanf("%lf",&num2);
            printf("Multiplicacao: %f\n",num1 * num2);
            break;
        case 4:
            printf("Digite o numero1: ");
            scanf("%lf",&num1);
            printf("Digite o numero2: ");
            scanf("%lf",&num2);
            printf("Divisao: %f\n",num1 / num2);
            break;
        case 5:
            return 0;
    }
    }
}
