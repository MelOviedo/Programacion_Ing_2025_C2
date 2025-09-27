#include <stdio.h>
#include <stdlib.h>

#include "definitions.h"

int main() {
    Nodo* PrimerNodo = NULL;
    insFirst(&PrimerNodo, 10);
    insFirst(&PrimerNodo, 20);
    insFirst(&PrimerNodo, 30);
    insFirst(&PrimerNodo, 40);
    insFirst(&PrimerNodo, 50);
    showFull(PrimerNodo);
    return 0;
}

Nodo* createNodo(int nuevoDato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) {
        printf("Error en la creacion del nodo\n");
        exit(1);
    }

    nuevoNodo->dato = nuevoDato;
    nuevoNodo->next = NULL;
    return nuevoNodo;
}

void insFirst(Nodo** PrimerNodo, int nuevoDato) {
    Nodo* nuevoNodo = createNodo(nuevoDato);

    nuevoNodo->next = *PrimerNodo;
    *PrimerNodo = nuevoNodo;
}

void delLast(Nodo** PrimerNodo) {}

void showFull(Nodo* PrimerNodo) {
    Nodo* actual = PrimerNodo;

    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->next;
    }
    printf("NULL");
}

void freeList(Nodo** PrimerNodo);