#include <stdio.h>

int main(){

    int numeros[5];

    for( int i = 0; i < 5; i++ ){
        printf("Digite os numeros que deseja: \n");
        scanf("%d", &numeros[i]);
    }

    return 0;
}