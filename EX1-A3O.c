#include <stdio.h>

int main(){

    int numUm;
    int numDois;
    int soma;

    printf("Digite o primeiro e segundo numero: ");
    scanf("%d %d", &numUm, &numDois);

    soma = numUm + numDois;

    printf("resultado: %d", soma);

    return 0;
}