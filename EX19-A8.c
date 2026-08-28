#include <stdio.h>

int main(){

    float preco, precofinal, valorParcelas;
    int qtdParcelas;
    char resposta;


    printf("Informe o valor do carro: \n");
    scanf("%f", &preco);

    printf("Deseja parcelar o valor do carro? \n");
    scanf(" %c", &resposta);

    if (resposta == 'S')
    {
        printf("Quantas parcelas deseja: \n");
        printf("6) 12) 18) 24) 30) 36) 42) 48) 54) 60) \n");
        scanf("%d", &qtdParcelas);

    while (qtdParcelas != 6 && qtdParcelas != 12 && qtdParcelas != 18 &&
       qtdParcelas != 24 && qtdParcelas != 30 && qtdParcelas != 36 &&
       qtdParcelas != 42 && qtdParcelas != 48 && qtdParcelas != 54 &&
       qtdParcelas != 60)
    {
       printf("Quantidade invalida! Digite novamente: ");
       scanf("%d", &qtdParcelas);
    }

        precofinal = preco + (preco * qtdParcelas / 100);
        valorParcelas = precofinal / qtdParcelas;
        printf("Valor final com juros: %f \n", precofinal);
        printf("Quantidade de parcelas %d \n", qtdParcelas);
        printf("Valor das parcelas %f \n", valorParcelas);

    } else if (resposta == 'N')
    {
        precofinal = preco - (preco * 20 / 100);
        printf("Valor final a vista %f \n", precofinal);
        printf("Quantidade de parcelas: (SEM PARCELAS) \n", qtdParcelas);
        printf("Valor das parcelas: (SEM PARCELAS) \n", valorParcelas);
    }

    return 0;
}