#include <stdio.h>

int main (){

    int original, num, num2, num3, result;

    printf("Entre com um numero positivo qualquer: \n");
    scanf("%d", &num);

    original = num;
    num2 = num++;
    num3 = ++num;
    result = num2 + num3;

    printf("numero inserido: %d numero ++:  %d ++ numero: %d resultado da soma: %d", original,num2,num3,result);

    return 0;
}