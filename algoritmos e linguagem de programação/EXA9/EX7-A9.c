#include <stdio.h>

#define SIZE 10

int main() {

    double vet[SIZE] = {0};

    // c) Quarto elemento
    vet[3];

    // d) Elemento 4
    vet[4];

    // e) Elemento 9
    vet[9] = 1.667;

    // f) Sétimo elemento
    vet[6] = 3.333;

    // g) Elementos 6 e 9
    printf("Elemento 6: %.2f\n", vet[6]);
    printf("Elemento 9: %.2f\n", vet[9]);

    // h) Todos os elementos
    printf("\nTodos os elementos:\n");

    for (int x = 0; x < SIZE; x++) {
        printf("%.3f\n", vet[x]);
    }

    return 0;
}