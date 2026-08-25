#include <stdio.h>

int main (){

    int num_anterior;
    int num_posterior;

    printf("Entre com um numero positivo qualquer: \n");
    scanf("%d", &num_anterior);

    num_posterior = num_anterior++;

    printf("%d %d", num_anterior, num_posterior);

    return 0;
}