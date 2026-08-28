#include <stdio.h>

int main(){

    int N, i = 0, result = 1, multiplicador;

    printf("Digite um numero inteiro e maior que 0: \n");
    scanf("%d", &N);

    multiplicador = N;

    while (i < N)
    {
        printf("%d x %d = ", result, multiplicador);

        result = result * multiplicador;

        printf("%d\n", result);

        multiplicador--;
        i++;
    }

    return 0;
}