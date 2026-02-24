/*Programa para verificar numeros positivos*/
#include<stdio.h>
#include<math.h>
int main(){
    float num;
    int i, positivo=0;
    for(i=1;i<=6;i++){
        scanf("%f",&num);
        if(num>0){
            positivo = positivo + 1;
        }
    }
    printf("%d valores positivos\n",positivo);
    return 0;
}
