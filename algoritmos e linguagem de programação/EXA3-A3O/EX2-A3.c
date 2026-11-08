#include <stdio.h>

int main(){
    float gCelcius;
    float gFahrenheit;

    printf("Digite o grau em Celcius que deseja converter: \n");
    scanf("%f", &gCelcius);

    gFahrenheit = (gCelcius * 1.8 + 32);

    printf("Seus graus Celcius convertidos em Fahrenheit � igual a: %2.f", gFahrenheit);

    return 0;
}