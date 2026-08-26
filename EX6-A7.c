#include <stdio.h>

int main() {

    int i = 2;
    int contador = 0;

    while (contador < 100) {
        printf("%d ", i);

        i += 2;
        contador++;
    }

    return 0;
}