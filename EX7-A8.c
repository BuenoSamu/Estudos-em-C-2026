#include <stdio.h>

int main(){

    int numeros, soma = 0, media, i=1;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numeros);

    soma = soma + numeros;

    while (i < 5)
    {
        printf("Digite o proximo numero: \n");
        scanf("%d", &numeros);
        soma = soma + numeros;
        i ++;
    }
    media = soma / 5;
    printf("%d\n", soma);
    printf("%d\n", media);

    return 0;
}