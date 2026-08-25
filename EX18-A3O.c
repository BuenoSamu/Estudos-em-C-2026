#include <stdio.h>

int main (){

    int num, ultimodigito; 

    printf("Digite um numero com mais de um digito: \n");
    scanf("%d", &num);

    ultimodigito = num % 10;

    printf("%d", ultimodigito);

    return 0;
}