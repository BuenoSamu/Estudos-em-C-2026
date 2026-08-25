#include <stdio.h>

int main (){

    int num1, num2;

    printf("Entre com dois numeros positivos quaisquer:\n");
    scanf("%d %d", &num1, &num2);

    printf("%d", num1 == num2);

    return 0;
}