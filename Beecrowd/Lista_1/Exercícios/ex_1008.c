/*Programa para calcular salario de um funcionário*/
#include<stdio.h>
#include<math.h>
int main(){
    int num, horas;
    double valor;
    scanf("%d",&num);
    scanf("%d",&horas);
    scanf("%lf",&valor);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num, horas * valor);
    return 0;
}
