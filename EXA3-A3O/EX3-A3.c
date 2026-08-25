#include <stdio.h>

int main () {

    float centimetros;
    float polegadas;

    printf("Digite a quantidade em centimetros que deseja converter: \n");
    scanf("%f", &centimetros);

    polegadas = (centimetros / 2.54);
    
    printf("Seus centimetros convertidos para polegadas sao iguais a: %f", polegadas);
    return 0;
}