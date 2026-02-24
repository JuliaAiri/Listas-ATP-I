/*Programa para escrever numeros por extenso*/

#include<stdio.h>
#include<string.h>

int main(){
   int num, tam;
   char num_str[5], extenso[200];
   printf("Digite um numero entre 0 e 9999: ");
   scanf("%d",&num);
   if (num == 0){
      printf("Extenso: zero\n");
      return 0;
   }

   sprintf(num_str,"%d",num);
   printf("Numero como string: %s\n",num_str);
   tam = strlen(num_str);
   switch (tam){
      case 1:
         sprintf(num_str,"000%d",num);
         break;
      case 2:
         sprintf(num_str,"00%d",num);
         break;
      case 3:
         sprintf(num_str,"0%d",num);
         break;

   }
   printf("Numero como string formatada: %s\n",num_str);
   switch (num_str[0]){
      case '0':
         strcpy(extenso,"");
         break;
      case '1':
         strcpy(extenso,"um mil");
         break;
      case '2':
         strcpy(extenso,"dois mil");
         break;
      case '3':
         strcpy(extenso,"tres mil");
         break;
      case '4':
         strcpy(extenso,"quatro mil");
         break;
      case '5':
         strcpy(extenso,"cinco mil");
         break;
      case '6':
         strcpy(extenso,"seis mil");
         break;
      case '7':
         strcpy(extenso,"sete mil");
         break;
      case '8':
         strcpy(extenso,"oito mil");
         break;
      case '9':
         strcpy(extenso,"nove mil");
         break;
   }
   if (num_str[0]!='0' && num_str[1]!='0' && num_str[2]=='0' && num_str[3]=='0'){
      strcat(extenso," e ");
   }

   switch (num_str[1]){
      case '0':
         if (num_str[0]!='0'){
            strcat(extenso," e ");
         }
         break;
      case '1':

         if (num_str[2]=='0' && num_str[3]=='0'){
            strcat(extenso," cem  ");
         }else{
            strcat(extenso," cento e ");
         }
         break;
      case '2':
         strcat(extenso," duzentos e ");
         break;
      case '3':
         strcat(extenso," trezentos e ");
         break;
      case '4':
         strcat(extenso," quatrocentos e ");
         break;
      case '5':
         strcat(extenso," quinhentos e ");
         break;
      case '6':
         strcat(extenso," seiscentos e ");
         break;
      case '7':
         strcat(extenso," setecentos e ");
         break;
      case '8':
         strcat(extenso," oitocentos e ");
         break;
      case '9':
         strcat(extenso," novecentos e ");
         break;
   }

   if (num_str[2] == '1'){
    switch (num_str[3]){
         case '0':
            strcat(extenso,"dez");
            break;
         case '1':
            strcat(extenso,"onze");
            break;
         case '2':
            strcat(extenso,"doze");
            break;
         case '3':
            strcat(extenso,"treze");
            break;
         case '4':
            strcat(extenso,"quatorze");
            break;
         case '5':
            strcat(extenso,"quinze");
            break;
         case '6':
            strcat(extenso,"dezeseis");
            break;
         case '7':
            strcat(extenso,"dezesete");
            break;
         case '8':
            strcat(extenso,"dezoito");
            break;
         case '9':
            strcat(extenso,"dezenove");
            break;
      }
   }else{
    switch (num_str[2]){
         case '2':
            strcat(extenso,"vinte e ");
            break;
         case '3':
            strcat(extenso,"trinta e ");
            break;
         case '4':
            strcat(extenso,"quarenta e ");
            break;
         case '5':
            strcat(extenso,"cinquenta e ");
            break;
         case '6':
            strcat(extenso,"sessenta e ");
            break;
         case '7':
            strcat(extenso,"setenta e ");
            break;
         case '8':
            strcat(extenso,"oitenta e ");
            break;
         case '9':
            strcat(extenso,"noventa e ");
            break;
      }
   }
   if (num_str[2] != '1'){
    switch (num_str[3]){
         case '1':
            strcat(extenso,"um");
            break;
         case '2':
            strcat(extenso,"dois");
            break;
         case '3':
            strcat(extenso,"trez");
            break;
         case '4':
            strcat(extenso,"quatro");
            break;
         case '5':
            strcat(extenso,"cinco");
            break;
         case '6':
            strcat(extenso,"seis");
            break;
         case '7':
            strcat(extenso,"sete");
            break;
         case '8':
            strcat(extenso,"oito");
            break;
         case '9':
            strcat(extenso,"nove");
            break;
      }
   }
   if (num_str[3] == '0' && num_str[2] !='1'){
      tam = strlen(extenso);
      extenso[tam-2] = '\0';
   }
   printf("Extenso: %s\n", extenso);
   return 0;
}
