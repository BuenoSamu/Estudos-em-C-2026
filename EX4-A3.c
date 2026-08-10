#include <stdio.h> 
#include <math.h> // biblioteca que permite usar o pow

int main () {

    float raio; 
    float area; 

    printf("Digite o raio do circulo que deseja: \n");
    scanf("%f", &raio);

    area = 3.14 * pow(raio, 2); // para elevar um numero em C pode-se usar a função "pow"

    printf("A area do cicrulo é igual a: %f", area);

    return 0;
}