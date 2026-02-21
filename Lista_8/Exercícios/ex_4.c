/*Programa para fazer menu de operacoes*/
 #include<stdio.h>
 int main(){
     float num1, num2;
     int op;
     printf("Digite o primeiro valor: ");
     scanf("%f",&num1);
     printf("Digite o segundo valor: ");
     scanf("%f",&num2);
     printf("Veja o menu de opcoes:\n 1-Somar os dois numeros\n 2-Subtrair os dois numeros\n 3-Multiplicar os dois numeros\n 4-Dividir os dois numeros(Com denomidador diferente de 0)\n");
     printf("Digite sua opcao de 1 a 4: ");
     scanf("%d",&op);
     switch(op){
         case 1:
        printf("Opcao 1: %f + %f= %f",num1, num2, num1 + num2);
        break;
         case 2:
            printf("Opcao 2: %f - %f= %f", num1, num2, num1 - num2);
            break;
         case 3:
            printf("Opcao 3: %f * %f= %f", num1, num2, num1 * num2);
            break;
         case 4:
            if(num2==0){
                printf("Invalido");
            }else{
                printf("Opcao 4: %f / %f= %f", num1, num2, num1 / num2);
            }
            break;
         default:
            printf("Opcao invalida");
            break;
            }
            return 0;
     }
