//
// Created by miguel on 28/04/2020.
//

#include "listas.h"
#include <stdlib.h>

LISTA criar_lista(){
    LISTA l = malloc(sizeof(NODO));
    l->valor = NULL;
    l->prox = NULL;

    return l;
}

LISTA insere_cabeca(LISTA l, void *valor){
    if (l->valor == NULL){
        l->valor = valor;
        return l;
    }else{
        LISTA m = malloc(sizeof(NODO));
        m->valor = valor;
        m->prox = l;
        return m;
    }
}

void *devolve_cabeca(LISTA l){
    return l->valor;
}

LISTA proximo(LISTA l){
    return l->prox;
}

int lista_esta_vazia(LISTA l){
    if (l == NULL || (l->valor == NULL &&  l->prox == NULL)) return 1;
    else return 0;
}