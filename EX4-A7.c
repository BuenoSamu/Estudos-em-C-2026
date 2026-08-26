#include <stdio.h>

int main() {

    float populacaoA;
    float populacaoB;
    float taxA, taxB;
    int anos = 0;

    printf("Informe a populacao da cidade A: \n");
    scanf("%f", &populacaoA);

    printf("Informe a populacao da cidade B: \n");
    scanf("%f", &populacaoB);

    printf("Informe a taxa anual da cidade A: \n");
    scanf("%f", &taxA);

    printf("Informe a taxa anual da cidade B: \n");
    scanf("%f", &taxB);

    while (populacaoA < populacaoB) {

       populacaoA = populacaoA + (populacaoA * taxA / 100);
       populacaoB = populacaoB + (populacaoB * taxB / 100);

        anos++;
    }

    printf("Serão necessarios %d anos.\n", anos);
    printf("Populacao A: %.0f\n", populacaoA);
    printf("Populacao B: %.0f\n", populacaoB);

    return 0;
}