#include <stdio.h>

int main(){

    int numero, multiplicador=1, resultado, i=1;

    printf("Digite o numero que deseja ver da tabuada: \n");
    scanf("%d", &numero);

    printf("Tabuada do %d: \n", numero);

    while(i <= 10){

        resultado = numero * multiplicador;
        printf("%d X %d = %d \n", numero, multiplicador, resultado);
        multiplicador++;
        i ++;
    }

    return 0;
}