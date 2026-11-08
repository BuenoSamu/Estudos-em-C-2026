#include <stdio.h>

int main(){

    float salarioatual;
    float percentualdereajuste;
    float reajustereal;
    float novosalario;

    printf("Digite o valor do seu salario: \n");
    scanf("%f", &salarioatual);
    printf("Digite o valor do percentual do reajuste: \n");
    scanf("%f", &percentualdereajuste);

    reajustereal = salarioatual * percentualdereajuste / 100;
    novosalario = salarioatual + reajustereal;

    printf("O salario atualizado com o percentual de reajuste e igual a: %2.f", novosalario);


    return 0;
}