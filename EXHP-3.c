#include <stdio.h>

int main(){

    char ingredientes;
    int totalMl = 0;

    while (totalMl < 500)
    {
        printf("\nEscolha um ingrediente:\n");
        printf("M - Essencia de mandragora (100 ml)\n");
        printf("L - Lagrimas de fenix (50 ml)\n");
        printf("P - Po de bezoar (25 ml)\n");
        printf("B - Pele de basilisco (75 ml)\n");



        if(ingredientes == 'M'){
            totalMl = totalMl + 100;
        } else if (ingredientes == 'L')
        {
            totalMl = totalMl + 50;
        } else if (ingredientes == 'P')
        {
            totalMl = totalMl + 25;
        } else if (ingredientes == 'B')
        {
            totalMl = totalMl + 75;
        }else {
            printf("Ingrediente invalido!\n");
        }
        
        printf("Quantidade autal: %d", totalMl);

        if(totalMl == 500){
            printf("Poção concluída com sucesso!");
        } else if (totalMl > 500){
            printf("A poção explodiu! Reinicie a preparação.");
        }
        
    }
    return 0;
}