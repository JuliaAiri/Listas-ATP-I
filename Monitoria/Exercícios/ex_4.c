/*Programa para converter horas em minutos*/
#include<stdio.h>
int main(){
    int hora1, hora2, min1, min2;
    printf("Digite a hora do primeiro horario: ");
    scanf("%d",&hora1);
    printf("Digite os minutos do primeiro horario: ");
    scanf("%d",&min1);
    printf("Digite o segundo horario: ");
    scanf("%d",&hora2);
    printf("Digite os minutos do segundo horario: ");
    scanf("%d",&min2);
    hora1 = hora1 * 60;
    hora2 = hora2 * 60;
    printf("Saida esperada: %d minutos", (hora2 + min2) - (hora1 + min1));
    return 0;
}
