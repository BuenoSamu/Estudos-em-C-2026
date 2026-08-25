#include <stdio.h>

int main(){

    int numUm;
    int numDois;
    int diferenca;

    printf("Digite o primeiro e segundo numero: ");
    scanf("%d %d", &numUm, &numDois);

    diferenca = numUm != numDois;

    printf("resultado: %d", diferenca);

    return 0;
}