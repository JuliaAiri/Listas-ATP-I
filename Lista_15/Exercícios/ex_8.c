//programa para ler uma quantidade de palavras informadas pelo usuário e indicar qual seria a primeira e a última considerando a ordem alfabética//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int N;
printf("DIGITE QUANTAS PALAVRAS VAO SER DIGITADAS: ");
scanf("%d", &N);
// limpando o buffer //
getchar();
char palavra[100], primeira[100], ultima[100];
for(int i=0; i<N; i++){
printf("DIGITE A PALAVRA %d: ", i+1);
fgets(palavra, 100, stdin);
//limpando o \n //
for(int j=0; palavra[j] != '\0'; j++){
if(palavra[j]=='\n'){
palavra[j]='\0';
break;
}
}
//guarda a primeira digitada palavra como referencia//
if(i==0){
strcpy(primeira, palavra);
strcpy(ultima, palavra);
}else{
//comparando//
if(strcmp(palavra, primeira)<0){
strcpy(primeira, palavra);
}
if(strcmp(palavra, ultima)>0){
strcpy(ultima, palavra);
}
}
}
printf("PRIMEIRA PALAVRA NA ORDEM ALFABETICA: %s\n", primeira);
printf("ULTIMA PALAVRA NA ORDEM ALFABETICA: %s", ultima);
return 0;
}
