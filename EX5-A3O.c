#include <stdio.h>

int main(){

    int numUm;
    int numDois;
    int soma;
    int media; 

    printf("Digite o primeiro e segundo numero: ");
    scanf("%d %d", &numUm, &numDois);

    soma = numUm + numDois;
    media = soma / 2;

    printf("resultado: %d", media);

    return 0;
}