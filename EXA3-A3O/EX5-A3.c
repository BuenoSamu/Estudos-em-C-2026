#include <stdio.h>

int main () {
    float salario;
    float aumento;
    float resultado;

    printf("Digite o valor do salario: \n");
    scanf("%f", &salario);

    aumento = (salario * 0.15);
    resultado = (salario + aumento);

    printf("Seu salario com aumento de 15 por cento e igual a: %2.f", resultado); // o 2. antes do f serve para indicar a quantidade de casas

    return 0;
}