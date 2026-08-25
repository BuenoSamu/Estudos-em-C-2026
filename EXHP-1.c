#include <stdio.h>

int main (){

    int KmPercorridos, tempoHoras, tempoMinutos, kmRestante;


    printf("Informe quantos Km se passaram: \n");
    scanf("%d", &KmPercorridos);

    if(KmPercorridos >= 500){
        printf("Voce chegou ao seu destino!");
    } else {
        kmRestante = 500 - KmPercorridos;
        tempoHoras = kmRestante / 100;
        tempoMinutos = tempoHoras * 60;
        printf("Faltam %d minutos para chegar ao destino e %d Km a serem percorridos", tempoMinutos, kmRestante);
    }

    return 0;
}