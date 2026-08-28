#include <stdio.h>

int main(){

    int numero, result =1, multiplicador, i = 0;

    printf("Digite o numero que deseja: \n");
    scanf("%d", &numero);

    multiplicador = numero;

    while (i < numero)
    {
        result = result * multiplicador;
        multiplicador--;
        i++;
    }

    printf("%d", result);

    return 0;
}