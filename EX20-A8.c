#include <stdio.h>

int main(){

    float Chico = 1.50, Ze = 1.10;
    int i = 0;

    while (Chico <= Ze)
    {
        
        Ze = Ze + 3;
        Chico = Chico + 2;
        i++;
    }
    

    return 0;
}