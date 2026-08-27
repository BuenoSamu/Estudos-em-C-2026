#include <stdio.h>

int main(){

    int numero, maior8 = 0, menor8 = 0, i =0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero);

    while (numero < 20)
    {
        if (numero >  8)
        {
            maior8++;
        } else{
            menor8++;
        }

        printf("Digite o proximo numero: \n");
        scanf("%d", &numero);
        i ++;  
    }

    printf("Quantidade de numeros maiores que 8: %d\n", maior8);
    printf("Quantidade de numeros menores que 8: %d\n", menor8);

    return 0;
}