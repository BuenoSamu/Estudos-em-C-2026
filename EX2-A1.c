#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int info;
    struct No *prox;
} No;

No* push(No *topo, int valor){
    No *novo = malloc(sizeof(No));
    novo -> info = valor;
    novo -> prox = topo;
    return novo;
}

No* pop(No *topo){
    if(topo == NULL){
        return NULL;
    }
    
    No *aux = topo;
    topo = topo -> prox;
    free(aux);
    return topo;
}

void mostrar(No *topo){
    while(topo != NULL){
        printf("%d \n", topo -> info);
        topo = topo -> prox;
    }
}

int main(){
    No *pilha = NULL;
    
    pilha = push(pilha, 10);
    pilha = push(pilha, 20);
    pilha = push(pilha, 30);
    
    mostrar(pilha);
    printf("\n");
    
    pilha = pop(pilha);
    
    mostrar(pilha);
    printf("\n");
    
    pilha = push(pilha, 40);
    
    mostrar(pilha);
    
}