#include <stdio.h>

int main (){

    int num1, num2;
    
    printf("Digite os dois numeros que deseja trocar o valor: \n");
    scanf("%d %d", &num1,&num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Numero um = %d\n", num1);
    printf("Numero dois = %d\n", num2);

    return 0;
}