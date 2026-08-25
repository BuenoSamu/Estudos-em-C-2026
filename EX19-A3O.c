#include <stdio.h>

int main (){

    int primeirodigito, numero; 

    printf("Digite um numero com mais de um digito: \n");
    scanf("%d", &numero);

    while (numero >=10)
    {
        numero = numero / 10;
    }

    primeirodigito = numero;
    
    printf("O primeiro digito e: %d\n", primeirodigito);

    return 0;
}