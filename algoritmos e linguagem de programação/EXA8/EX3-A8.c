#include <stdio.h>

int main(){

    char nome[20];
    int i = 0;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    while (i <= 10)
    {
        printf("%s\n", nome);
        i++;
    }
    

    return 0;
}