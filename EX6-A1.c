#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No *prox;
} No;

No* criar_no(int valor) {
    No *novo = malloc(sizeof(No));

    novo->info = valor;
    novo->prox = NULL;

    return novo;
}

No* inserir_inicio(No *lista, int valor) {
    No *novo = criar_no(valor);

    novo->prox = lista;
    lista = novo;

    return lista;
}

No* inserir_final(No *lista, int valor) {
    No *novo = criar_no(valor);

    if (lista == NULL) {
        return novo;
    }

    No *aux = lista;

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;

    return lista;
}

No* remover_inicio(No *lista) {
    if (lista == NULL) {
        return NULL;
    }

    No *aux = lista;
    lista = lista->prox;

    free(aux);

    return lista;
}

No* remover_elemento(No *lista, int valor) {
    No *aux = lista;
    No *ant = NULL;

    while (aux != NULL && aux->info != valor) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        return lista;
    }

    if (ant == NULL) {
        lista = aux->prox;
    } else {
        ant->prox = aux->prox;
    }

    free(aux);

    return lista;
}

void mostrar(No *lista) {
    No *aux = lista;

    while (aux != NULL) {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }

    printf("NULL\n");
}

int primeiro_maior_que(No *lista, int limite, int *resultado) {
    No *aux = lista;

    while (aux != NULL) {
        if (aux->info > limite) {
            *resultado = aux->info;
            return 1; 
        }
        aux = aux->prox;
    }

    return 0; 
}

int main() {
    No *lista = NULL;

    lista = inserir_inicio(lista, 10);
    lista = inserir_final(lista, 20);
    lista = inserir_final(lista, 30);

    mostrar(lista);

    int limite = 15;
    int resultado;

    if (primeiro_maior_que(lista, limite, &resultado)) {
        printf("Primeiro valor maior que %d: %d\n", limite, resultado);
    } else {
        printf("Nenhum valor maior que %d foi encontrado.\n", limite);
    }

    lista = remover_inicio(lista);
    lista = remover_elemento(lista, 20);

    mostrar(lista);

    return 0;
}