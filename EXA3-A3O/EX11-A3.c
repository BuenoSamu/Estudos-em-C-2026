#include <stdio.h>

int main (){
    int numeroum;
    int numerodois;
    int numerotres;
    int numeroquatro;
    int numerocinco;
    int media;

    printf("digite os cinco numeros: \n");
    scanf("%d %d %d %d %d", &numeroum, &numerodois, &numerotres, &numeroquatro, &numerocinco);

    media = (numeroum + numerodois + numerotres + numeroquatro + numerocinco) / 5;

    printf("sua media e igual a : %d", media);

    return 0;
}