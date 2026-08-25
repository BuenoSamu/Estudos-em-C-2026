#include <stdio.h>

int main (){

    int numero;
    int sucessor;
    int antecessor;

    printf("Digite o numero que deseja: \n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("%d %d %d", antecessor, numero, sucessor);

    return 0;
}