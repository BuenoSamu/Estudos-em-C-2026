#include <stdio.h>

int main()
{
    char corolhos, corcabelos;
    float altura, peso, mediaIdade;

    int idade;
    
    int contRuivo = 0, contCaPre = 0, contCaLouro = 0, contCaCas = 0;
    int contOlAz = 0, contOlPre = 0, contOlVer = 0, contOlCas = 0;
    
    int contSup50 = 0, contInf60 = 0;
    
    int somaIdade = 0;
    int contAltura = 0;
    int contRuivoSemAzul = 0;
    
    float porcentagemAzul;

    int i = 0;

    while (i < 20)
    {
        printf("\nDigite a idade da pessoa: ");
        scanf("%d", &idade);

        printf("Digite a altura e o peso da pessoa: ");
        scanf("%f %f", &altura, &peso);

        // Pessoas com mais de 50 anos
        if (idade > 50)
        {
            contSup50++;
        }

        // Pessoas com menos de 60 kg
        if (peso < 60)
        {
            contInf60++;
        }

        // Média das idades das pessoas com altura inferior a 1,50
        if (altura < 1.50)
        {
            somaIdade = somaIdade + idade;
            contAltura++;
        }

        printf("\nSelecione a cor do cabelo dessa pessoa:\n"
               "P) Preto\n"
               "C) Castanho\n"
               "L) Louro\n"
               "R) Ruivo\n\n");

        scanf(" %c", &corcabelos);

        if (corcabelos == 'P')
        {
            contCaPre++;
        }
        else if (corcabelos == 'C')
        {
            contCaCas++;
        }
        else if (corcabelos == 'L')
        {
            contCaLouro++;
        }
        else if (corcabelos == 'R')
        {
            contRuivo++;
        }
        else
        {
            printf("Opcao de entrada incorreta!\n");
        }

        printf("\nSelecione a cor dos olhos dessa pessoa:\n"
               "A) Azul\n"
               "P) Preto\n"
               "V) Verde\n"
               "C) Castanho\n\n");

        scanf(" %c", &corolhos);

        if (corolhos == 'A')
        {
            contOlAz++;
        }
        else if (corolhos == 'P')
        {
            contOlPre++;
        }
        else if (corolhos == 'V')
        {
            contOlVer++;
        }
        else if (corolhos == 'C')
        {
            contOlCas++;
        }
        else
        {
            printf("Opcao de entrada incorreta!\n");
        }

        // Pessoas ruivas que não possuem olhos azuis
        if (corcabelos == 'R' && corolhos != 'A')
        {
            contRuivoSemAzul++;
        }

        i++;
    }

    // Calcula a média das idades
    if (contAltura > 0)
    {
        mediaIdade = (float)somaIdade / contAltura;
    }
    else
    {
        mediaIdade = 0;
    }

    // Calcula a porcentagem de pessoas com olhos azuis
    porcentagemAzul = ((float)contOlAz / 20) * 100;

    printf("\n--- RESULTADOS ---\n");

    printf("Quantidade de pessoas com mais de 50 anos: %d\n", contSup50);

    printf("Quantidade de pessoas com menos de 60KG: %d\n", contInf60);

    printf("Media das idades das pessoas com altura inferior a 1,50: %.2f\n",
           mediaIdade);

    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n",
           porcentagemAzul);

    printf("Quantidade de pessoas ruivas que nao possuem olhos azuis: %d\n",
           contRuivoSemAzul);

    return 0;
}
