#include <stdio.h>

int main() {

    float populacaoA = 80000;
    float populacaoB = 200000;
    int anos = 0;

    while (populacaoA < populacaoB) {

        populacaoA = populacaoA * 1.03;
        populacaoB = populacaoB * 1.015;

        anos++;
    }

    printf("Serão necessarios %d anos.\n", anos);
    printf("Populacao A: %.0f\n", populacaoA);
    printf("Populacao B: %.0f\n", populacaoB);

    return 0;
}