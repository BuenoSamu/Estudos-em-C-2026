#include <stdio.h>

int main(){


    int N, numeros, i,resultado;

    printf("Digite um numero inteiro que deseja: \n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        resultado = i * i;
        printf("%d ", resultado);
    }
    

    return 0;
}