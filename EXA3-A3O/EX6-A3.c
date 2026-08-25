#include <stdio.h>

int main (){
    int segundos;
    int minutos;
    int horas;
    int segundosrestantes;

    printf("Digite o tempo que deseja converter(em segundos): \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosrestantes = segundos % 60;

    printf("%d horas, %d minutos, %d segundos \n", horas, minutos, segundosrestantes);

    return 0;
}