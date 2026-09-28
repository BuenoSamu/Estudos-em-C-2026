#include <stdio.h>

int main (){

    int numeros[10], resultado;

    printf("Digite os numeros que deseja: \n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 10; i++){
        resultado = numeros[i] * 10;
        printf("Vetor[%d] = %d; %d x 10 = %d\n", i, numeros[i], numeros[i], resultado);
    }

    return 0;
}