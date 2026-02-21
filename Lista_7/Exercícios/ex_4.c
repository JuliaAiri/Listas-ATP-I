/*Programa para calcular media*/
#include<stdio.h>
int main(){
float mp, mt, mf;
printf("Digite sua media de provas: ");
scanf("%f",&mp);
printf("Digite sua media de trabalhos: ");
scanf("%f",&mt);
if(mp>=0 && mp<=10 && mt>=0 && mt<=10){
  if(mp>5 && mt>5){
  mf = (mt + mp) / 2;
  printf("Esta e sua media: %f",mf);
  }else{
     if(mt<mp){
     printf("Esta e sua media: %f",mt);
     }else{
        if(mp<mt){
        printf("Esta e sua media: %f",mp);
        }else{
            printf("Esta e sua media: %f",mt);
}
}
}
}else{
printf("Valores invalidos");
}
return 0;
}
