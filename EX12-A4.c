#include <stdio.h>

int main() {

    float tempo;
    float vMedia;
    float distancia;
    float combustivelgasto;

    printf("Digite o tempo da viagem: \n");
    scanf("%f", &tempo);

    printf("Digite a velocidade media do veiculo: \n");
    scanf("%f", &vMedia);

    distancia = tempo * vMedia;
    combustivelgasto = distancia / 12;

    printf("A distancia percorrida foi: %.2f km\n", distancia);
    printf("O combustivel gasto foi: %.2f litros\n", combustivelgasto);

    return 0;
}

