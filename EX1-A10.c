#include <stdio.h>

int main() {

    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        printf("Voce digitou: %d\n\n", numeros[i]);
    }

    return 0;
}