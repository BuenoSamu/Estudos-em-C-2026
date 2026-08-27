#include <stdio.h>

int main()
{
    int numeros, contpar = 0, contimpar = 0, i = 0;

    printf("Digite um numero inteiro, impar ou par: \n");
    scanf("%d", &numeros);

    while (i < 10)
    {
        if (numeros % 2 == 0)
        {
            contpar++;
        }
        else
        {
            contimpar++;
        }

        printf("Digite o proximo numero: \n");
        scanf("%d", &numeros);

        i++;
    }

    printf("Quantidade de numeros pares: %d\n", contpar);
    printf("Quantidade de numeros impares: %d\n", contimpar);

    return 0;
}