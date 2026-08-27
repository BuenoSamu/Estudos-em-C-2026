#include<stdio.h>

int main(){

    int numero, maior, i = 1;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero);

    maior = numero;

    while (i < 5)
    {
        printf("Digite mais um numero: \n");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
        i++;
    }
    
    printf("O maior numero e: %d", maior);


    return 0;
}