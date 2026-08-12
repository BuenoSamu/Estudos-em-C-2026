#include <stdio.h>

int main(){

    int numUm;
    int numDois;
    int produto;

    printf("Digite o primeiro e segundo numero: ");
    scanf("%d %d", &numUm, &numDois);

    produto = numUm * numDois;

    printf("resultado: %d", produto);

    return 0;
}