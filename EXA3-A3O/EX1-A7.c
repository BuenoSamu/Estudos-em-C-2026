#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero entre 0 e 10: \n");
    scanf("%d", &numero);



    while (numero < 0 || numero > 10) {
        printf("O numero digitado nao esta entre 0 e 10!\n");
        printf("Digite o numero correto: ");
        scanf("%d", &numero);
    }

    printf("Numero digitado: %d\n", numero);

    return 0;
}