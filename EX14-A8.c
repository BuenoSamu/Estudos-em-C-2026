#include <stdio.h>

int main(){

    int numeros = 1, soma=0;

    while (numeros <= 500)
    {
        if(numeros % 2 != 0 && numeros % 3 == 0){
            soma = numeros + soma;   
        }
        numeros++;
    }

    printf("Soma dos numeros impares/multiplos de 3 em um intervalo de 1 a 500: %d ", soma);
    
    return 0;
}