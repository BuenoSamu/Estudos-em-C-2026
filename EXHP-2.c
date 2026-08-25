#include <stdio.h>

int main() {

    char opcao, primeiraOpcao;
    int contA = 0, contB = 0, contC = 0, contD = 0;

    printf("1. Qual e a sua maior qualidade?\n"
           "A) Coragem\n"
           "B) Ambicao\n"
           "C) Lealdade\n"
           "D) Inteligencia\n\n");

    scanf(" %c", &primeiraOpcao);

    if (primeiraOpcao != 'A' && primeiraOpcao != 'B' &&
        primeiraOpcao != 'C' && primeiraOpcao != 'D') {

        printf("Entrada invalida!\n");
        return 0;
    }

    if (primeiraOpcao == 'A') {
        contA++;
    } else if (primeiraOpcao == 'B') {
        contB++;
    } else if (primeiraOpcao == 'C') {
        contC++;
    } else if (primeiraOpcao == 'D') {
        contD++;
    }

    printf("\n2. Qual e a sua maior fraqueza?\n"
           "A) Medo de se expor\n"
           "B) Teimosia\n"
           "C) Inseguranca\n"
           "D) Desinteresse\n\n");

    scanf(" %c", &opcao);

    if (opcao != 'A' && opcao != 'B' &&
        opcao != 'C' && opcao != 'D') {

        printf("Entrada invalida!\n");
        return 0;
    }

    if (opcao == 'A') {
        contA++;
    } else if (opcao == 'B') {
        contB++;
    } else if (opcao == 'C') {
        contC++;
    } else if (opcao == 'D') {
        contD++;
    }

    printf("\n3. Como voce prefere passar seu tempo livre?\n"
           "A) Aventurando-se com amigos\n"
           "B) Planejando estrategias\n"
           "C) Ajudando os outros\n"
           "D) Estudando novos assuntos\n\n");

    scanf(" %c", &opcao);

    if (opcao != 'A' && opcao != 'B' &&
        opcao != 'C' && opcao != 'D') {

        printf("Entrada invalida!\n");
        return 0;
    }

    if (opcao == 'A') {
        contA++;
    } else if (opcao == 'B') {
        contB++;
    } else if (opcao == 'C') {
        contC++;
    } else if (opcao == 'D') {
        contD++;
    }

    if (contA > contB && contA > contC && contA > contD) {

        printf("\nVoce pertence a Grifinoria!\n");

    } else if (contB > contA && contB > contC && contB > contD) {

        printf("\nVoce pertence a Sonserina!\n");

    } else if (contC > contA && contC > contB && contC > contD) {

        printf("\nVoce pertence a Lufa-Lufa!\n");

    } else if (contD > contA && contD > contB && contD > contC) {

        printf("\nVoce pertence a Corvinal!\n");

    } else {

        if (primeiraOpcao == 'A') {
            printf("Grifinoria!\n");

        } else if (primeiraOpcao == 'B') {
            printf("Sonserina!\n");

        } else if (primeiraOpcao == 'C') {
            printf("Lufa-Lufa!\n");

        } else if (primeiraOpcao == 'D') {
            printf("Corvinal!\n");
        }
    }

    return 0;
}