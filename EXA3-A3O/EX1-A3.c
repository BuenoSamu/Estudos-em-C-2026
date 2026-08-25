#include <stdio.h>

int main(void)
{
    int primeiro_numero;
    int segundo_numero;
    int terceiro_numero;
    int quarto_numero;
    int quinto_numero;
    int resultado;

    printf("Digite os 5 numeros: \n");

    scanf("%d %d %d %d %d",
          &primeiro_numero,
          &segundo_numero,
          &terceiro_numero,
          &quarto_numero,
          &quinto_numero);

    resultado = (primeiro_numero + segundo_numero + terceiro_numero + quarto_numero + quinto_numero) / 5;

    printf("A media e: %d\n", resultado);

    return 0;
}