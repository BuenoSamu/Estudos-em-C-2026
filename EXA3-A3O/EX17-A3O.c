#include <stdio.h>

int main() {

    int num1, num2, num3;
    int peso1, peso2, peso3;
    int soma, somapesos;
    float result;

    peso1 = 2;
    peso2 = 3;
    peso3 = 5;

    printf("Entre com os 3 valores que deseja: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = (num1 * peso1) + (num2 * peso2) + (num3 * peso3);

    somapesos = peso1 + peso2 + peso3;

    result = (float)soma / somapesos;

    printf("A media ponderada e: %.2f\n", result);

    return 0;
}