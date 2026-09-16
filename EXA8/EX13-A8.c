#include <stdio.h>

int main(){

    int numeros, i= 0, contA = 0, contB = 0, contC = 0;

    printf("Dgite um numero inteiro: \n");
    scanf("%d", &numeros);

    while (i<19)
    {
        printf("Digite mais um numero: \n");
        scanf("%d", &numeros);

        if (numeros >= 0 && numeros <= 100)
        {
            contA++;
        } else if(numeros >= 101 && numeros <= 200)
        {
            contB++;
        } else if (numeros > 200)
        {
            contC++;
        }
        i++;
    }

    printf("Numeros entre 0 e 100: %d \n", contA);
    printf("Numeros entre 101 e 200: %d \n", contB);
    printf("Numeros maiores que 200: %d \n", contC);
    
    return 0;
}