#include <stdio.h>

int main() {

    char nome[50];
    char nacionalidade[50];
    char datanascimento[11];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua nacionalidade: \n");
    scanf("%s", nacionalidade);

    printf("Digite sua data de nascimento: \n");
    scanf("%s", datanascimento);

    printf("%s %s %s", nome, nacionalidade, datanascimento);

    return 0;
}