#include <stdio.h>

int main(){

    int num1[10], num2[10];
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite os valores do primeiro vetor: \n");
    
    for(int i=0; i<10; i++){
        scanf("%d", &num1[i]);
    } 

    printf("Digite os valores do segundo vetor: \n");
    
    for(int i=0; i<10; i++){
        scanf("%d", &num2[i]);
    }

    for(int i=0; i<10; i++ ){
        soma = num1[i] + num2[i];
        subtracao = num1[i] - num2[i];
        multiplicacao = num1[i] * num2[i]; 
        divisao = num1[i] / num2[i];

        printf("%d + %d = %d\n", num1[i], num2[i], soma);
        printf("%d - %d = %d\n", num1[i], num2[i], subtracao);
        printf("%d x %d = %d\n", num1[i], num2[i], multiplicacao);
        printf("%d / %d = %d\n", num1[i], num2[i], divisao);
    }

    return 0;
}