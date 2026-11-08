#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No *prox;
} No;

typedef struct Fila {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void enqueue(Fila *fila, int valor) {
    No *novo = malloc(sizeof(No));

    novo->info = valor;
    novo->prox = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = novo;
        fila->fim = novo;
    } else {

        fila->fim->prox = novo;

        fila->fim = novo;
    }
}

void dequeue(Fila *fila) {
    if (fila->inicio == NULL) {
        return;
    }

    No *aux = fila->inicio;

    fila->inicio = fila->inicio->prox;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(aux);
}

void mostrar(Fila *fila) {
    No *aux = fila->inicio;

    while (aux != NULL) {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }

    printf("NULL\n");
}

int main() {
    Fila fila;

    inicializar(&fila);

    enqueue(&fila, 10);
    enqueue(&fila, 20);
    enqueue(&fila, 30);

    mostrar(&fila);
    printf("");

    dequeue(&fila);

    mostrar(&fila);
    printf("");

    return 0;
}

