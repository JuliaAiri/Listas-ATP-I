/*Programa para calcular quadrado, cubo e raiz*/
#include<stdio.h>
#include<limits.h>
int main(){
    double num=1, i;
    for (i=1; num>0; i++){
        printf("Digite numero: ");
        scanf("%lf",&num);
        printf("Quadrado: %f\nCubo: %f\nRaiz: %f\n",num * num, num * num * num, sqrt(num));
    }
    return 0;
}
