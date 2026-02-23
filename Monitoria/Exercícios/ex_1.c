
/*Programa para adivinhar senhas*/
#include<stdio.h>
int main(){
    int i, num=1, h=1;
    for(i=0; num!=1234; i++){
        printf("Digite uma senha: ");
        scanf("%d",&num);
        if(num!=1234){
            printf("Senha incorreta. Tente novamente\n");
        }else{
            h = 0;
        }
    }
    if(h==0){
        printf("Acesso permitido!");
    }
    return 0;
}
