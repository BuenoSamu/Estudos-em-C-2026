#include <stdio.h>

int main (){

    int notas[10];

    printf("Digite as 10 notas: \n");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &notas[i]);
    }
    
    printf("Notas digitadas:\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", notas[i]);
    }

    return 0;
}