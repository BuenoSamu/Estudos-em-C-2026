#include <stdio.h>

int main(){

    int codAluno, pesoMaior = 4, peso1 = 3, peso2 = 3, soma, media;
    float nota1, nota2, nota3;

    printf("Entre com seu codigo: \n");
    scanf("%d", &codAluno);

    while (codAluno >= 0)
    {
        printf("Entre com suas notas: \n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        if (nota1 > nota2 && nota1 > nota3)
        {
            media = (nota1 * pesoMaior + nota2 * peso1 + nota3 * peso2) / (pesoMaior + peso1 + peso2);
        } 
        else if (nota2 > nota3 && nota2 > nota1)
        {
            media = (nota2 * pesoMaior + nota1 * peso1 + nota3 * peso2) / (pesoMaior + peso1 + peso2);
        } 
        else if (nota3 > nota2 && nota3 > nota1)
        {
            media = (nota3 * pesoMaior + nota1 * peso1 + nota2 * peso2) / (pesoMaior + peso1 + peso2);
        }

        if (media >= 5)
        {
            printf("Seu codigo: %d \n", codAluno);
            printf("Nota 1: %.2f Nota 2: %.2f Nota 3: %.2f \n", nota1, nota2, nota3);
            printf("Media: %d\n", media);
            printf("APROVADO\n");
        } 
        else 
        {
            printf("Seu codigo: %d \n", codAluno);
            printf("Nota 1: %.2f Nota 2: %.2f Nota 3: %.2f \n", nota1, nota2, nota3);
            printf("Media: %d\n", media);
            printf("REPROVADO\n");
        }

        printf("\nEntre com seu codigo: \n");
        scanf("%d", &codAluno);
    }

    return 0;
}

