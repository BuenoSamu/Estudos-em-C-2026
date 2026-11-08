#include <stdio.h>

int main(){

    int num1,num2;

    printf("Digite dois numeros inteiros com um intervalo entre eles(EX: 1 e 10): \n");
    scanf("%d %d", &num1, &num2);

    while(num1 != num2){
        num1++;
        printf("%d ", num1);
    }
    

    return 0;
}