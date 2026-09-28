#include <stdio.h>

int main(){

    int numeros[10], soma = 0;

    printf("Digite os numeros que deseja: \n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 10; i++){
        soma = soma + numeros[i];
    }

    printf("A soma dos numeros e igual a: %d", soma);

    return 0;
}