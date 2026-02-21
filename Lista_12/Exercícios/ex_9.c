/*Programa para calcular o triangulo de Floyd*/
#include <stdio.h>

int main() {
    int N, i, j;
    int num = 1;

    // Lê um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    // Gera o Triângulo de Floyd
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); // Nova linha após cada linha do triângulo
    }

    return 0;
}

