#include <stdio.h>

int main(){

    int numUm;
    int numDois;
    int resultado;

    printf("Digite o primeiro e segundo numero: ");
    scanf("%d %d", &numUm, &numDois);

    resultado = numUm / numDois;

    printf("resultado: %d", resultado);

    return 0;
}