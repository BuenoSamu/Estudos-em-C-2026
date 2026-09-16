#include <stdio.h>

int main(){

    int base, expoente, i = 0, resultado = 1;

    printf("Digite a base e o expoente que deseja: \n");
    scanf("%d %d", &base, &expoente);

    while (i < expoente)
    {
        resultado = resultado * base;
        i++;
    }

    printf("Resultado: %d", resultado);
    
    return 0;
}