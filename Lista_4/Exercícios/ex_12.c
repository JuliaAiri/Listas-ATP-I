/*Programa para calcular watts de um equipamento e seu gasto*/
#include<stdio.h>
int main(){
   float potencia, horasd, wd, wm, wa, kwhd, kwhm, kwha, valor,gasto;
   printf("Digite a Potencia: ");
   scanf("%f",&potencia);
   printf("Digite as Horas gastas por dia: ");
   scanf("%f",&horasd);
   printf("Digite o Valor do Kilowatthora: ");
   scanf("%f",&valor);
   wd = potencia * horasd;
   printf("Este e seu gasto em watts por dia: %.0f\n", wd);
   wm = wd * 30;
   printf("Este e seu gasto em watts por mes: %.0f\n",wm);
   wa = wm * 12;
   printf("Este e seu gasto em watts por ano: %.0f\n",wa);
   kwhd = (potencia * horasd) / 1000;
   printf("Este e seu gasto em Kilowatthora por dia: %.4f\n",kwhd);
   kwhm = kwhd * 30;
   printf("Este e seu gasto em Kilowatthora por mes: %.2f\n",kwhm);
   kwha = kwhm * 12;
   printf("Este e seu gasto em Kilowatthora por ano: %.2f\n",kwha);
   gasto = valor * kwhm;
   printf("Este e seu Gasto no mes: %f",gasto);
   return 0;
}
