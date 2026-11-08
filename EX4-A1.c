// versão com erros de logica

typedef struct No { 
    int info; 
    struct No *prox; 
} No; 

int tamanho(No *lista) { 
    int n = 0;

    No *aux = lista;

    while (aux->prox != NULL) { 
        n++; 
        aux = aux->prox; 
    }

    return n; 
} 

// vesão corrigida 

typedef struct No { 
    int info; 
    struct No *prox; 
} No; 

int tamanho(No *lista) { 
    int n = 0;

    No *aux = lista;

    while (aux != NULL) { 
        n++; 
        aux = aux->prox; 
    }

    return n; 
} 