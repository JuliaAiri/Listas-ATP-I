/*Programa para calcular distâncias*/
#include<stdio.h>
#include<math.h>
int main(){
    int x1, x2, y1, y2, manhattan, diferenca1, diferenca2;
    double euclidiana;
    printf("Digite o X1: ");
    scanf("%d",&x1);
    printf("Digite o X2: ");
    scanf("%d",&x2);
    printf("Digite o Y1: ");
    scanf("%d",&y1);
    printf("Digite o Y2: ");
    scanf("%d",&y2);
    euclidiana = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    diferenca1 = x2 - x1;
    if (diferenca1 < 0){
        diferenca1 = - diferenca1;
    }
    diferenca2 = y2 - y1;
    if(diferenca2 < 0){
        diferenca2 = - diferenca2;
    }
    manhattan = diferenca1 + diferenca2;
    printf("Distancia Euclidiana: %f\nDistancia Manhattan: %d", euclidiana, manhattan);
    return 0;
}
