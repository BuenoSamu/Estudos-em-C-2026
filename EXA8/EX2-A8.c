#include <stdio.h>

int main(){

    int num = 1, i = 1, result = 0;

    while (i <= 15)
    {
        result = result + num;
        i++;
        num++;
        
    }

    printf("%d", result);
    

    return 0;
}