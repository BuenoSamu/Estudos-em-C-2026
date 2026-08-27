#include <stdio.h>

int main(){

    int numeros = 100; 

    while (numeros <= 200)
    {
        if (numeros % 2 != 0)
        {
           printf("%d\n", numeros);
        }
        numeros++;
    }
    return 0;
}