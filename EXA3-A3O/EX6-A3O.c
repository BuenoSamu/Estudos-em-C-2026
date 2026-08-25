#include <stdio.h>
#define PI 3.14159

int main () {

    float raio;
    float area;

    printf("Digite o raio do circulo: \n");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo e igual a: %f \n", area);

    return 0;
}