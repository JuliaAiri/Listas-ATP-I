/*Validar entrada de notas e calcular a media simples*/
#include<stdio.h>

int main(){
   float n1, n2, media;
   printf("Digite nota 1: ");
   scanf("%f",&n1);

   if (n1>=0){
      if (n1<=10){
        printf("Digite nota 2: ");
        scanf("%f",&n2);
        if (n2>=0){
          if (n2<=10){
               media = (n1+n2)/2;
               printf("Media: %f\n",media);
          }else{
             printf("Nota 2 fora do intervalo 0 a 10\n");
             return 4; // 4 --- n2 maior do que 10
          }
        }else{
            printf("Nota 2 fora do intervalo 0 a 10\n");
            return 3; // 3 --- n2 menor do que zero
        }

      }else{
         printf("Nota 1 fora do intervalo 0 a 10\n");
         return 2; // 2 --- n1 maior do que 10
      }
   }else{
       printf("Nota 1 fora do intervalo 0 a 10\n");
       return 1; // 1 --- n1 menor do que zero
   }
   return 0;
}
