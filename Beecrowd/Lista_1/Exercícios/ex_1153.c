/*Programa para calcular fatorial*/
#include<stdio.h>
int main(){
    int num, i, fat = 1;
    scanf("%d",&num);
    if(num>0 && num<13){
      for(i=1;i<=num;i++){
        fat = fat * i;
    }
    printf("%d\n",fat);
    }else{
        printf("Numero invalido\n");
    }
    return 0;
}
