#include <stdio.h>

int main(){

    int num, result;

    printf("Digite um numero positivo inteiro qualquer: \n");
    scanf("%d", &num);

    result = num +=10;

    printf("resultado: %d", result);

    return 0;
}