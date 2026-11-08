#include <stdio.h>

int main (){

    int idade, somaidade=0, mediaidade, porcentagemBom, opiniao, cont3 = 0, cont2 = 0, cont1 = 0, i;


    for (i = 0; i < 15; i++)
    {
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        

        printf("Levando em consideracao a tabela de notas: otimo = 3, bom = 2, regular = 1 responda: \n");
        printf("\n Qual sua opiniao sobre o filme? \n");
        scanf("%d", &opiniao);

        if (opiniao == 3)
        {
            somaidade = somaidade + idade;
            cont3++;
        } else if (opiniao == 2)
        {
            cont2++;
        } else if (opiniao == 1)
        {
            cont1++;
        } else{
            printf("Entrada invalida! \n");
        }
    }

    mediaidade = somaidade / cont3;
    porcentagemBom = ((float)cont2 / 15) * 100;

    printf("media das idades que responderam otimo: %d\n", mediaidade);
    printf("quantidade de pessoas que responderam regular: %d\n", cont1);
    printf("porcentagem de pessoas que responderam bom: %d%\n", porcentagemBom);
    
    return 0;
}