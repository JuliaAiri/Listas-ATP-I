/*Programa para classificar nadadores*/
 #include<stdio.h>
 int main(){
     int idade;
     printf("Digite sua idade: ");
     scanf("%d",&idade);
     switch(idade){
     case 0 ... 4:
        printf("Nao pode competir");
        break;
     case 5 ... 7:
        printf("Infantil A");
        break;
     case 8 ... 10:
        printf("Infantil B");
        break;
     case 11 ... 13:
        printf("Juvenil A");
        break;
     case 14 ... 17:   // intervalos de numeros, funciona tambem com letras
        printf("Juvenil B");
        break;
     default:
         if(idade>=18){
            printf("Adulto");
         }else{
             printf("Invalido");
         }
        break;
     }
     return 0;
 }
