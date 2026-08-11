#include <stdio.h>

int main(){

    float precoProduto;
    float novoPreco;

    printf("Digite o valor base do produto: \n");
    scanf("%f", &precoProduto);

    novoPreco = precoProduto + (precoProduto * 0.02);

    printf("Esse e o novo valor do produto apos um aumento de 2%: %2.f", novoPreco);

    return 0; 
}