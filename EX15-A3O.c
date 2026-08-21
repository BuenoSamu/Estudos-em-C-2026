#include <stdio.h>

int main(){

    int num, num2, result;

    printf("Digite dois numero positivo inteiro qualquer: \n");
    scanf("%d %d", &num, &num2);

    result = num %= num2;

    printf("resultado: %d", result);

    return 0;
}