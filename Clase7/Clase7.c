#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"

int main() {
    Node* RootNode = createNode(0);
    recorrerInsertar(RootNode, 0, 10);
    recorrerInsertar(RootNode, 0, 20);
    recorrerInsertar(RootNode, 10, 30);
    recorrerInsertar(RootNode, 10, 40);
    recorrerInsertar(RootNode, 20, 50);
    recorrerInsertar(RootNode, 30, 70);
    recorrerInsertar(RootNode, 70, 100);
    recorrerInsertar(RootNode, 30, 80);
    recorrerInsertar(RootNode, 80, 50);
    recorrerInsertar(RootNode, 80, 60);
    recorrerImprimir(RootNode, 0);

    return 0;
}

Node* createNode(int newValue) {
    Node* newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf("Error al crear nodo\n");
        exit(1);
    }

    newNode->child1 = NULL;
    newNode->child2 = NULL;
    newNode->parent = NULL;
    newNode->value = newValue;
    return newNode;
}

void recorrerInsertar(Node* actual, int target, int newValue) {
    if (actual->value == target) {
        insChild(actual, newValue);
        return;
    }
    if (actual->child1 != NULL) {
        recorrerInsertar(actual->child1, target, newValue);
    }
    if (actual->child2 != NULL) {
        recorrerInsertar(actual->child2, target, newValue);
    }
    return;
}

void recorrerImprimir(Node* actual, int nivel) {
    for (int i = 0; i < nivel; i++) {
        (i == (nivel - 1)) ? printf("  └──") : printf("     "); // Es lo mismo que poner if - else
    }
    printf("%3d \n", actual->value); //es lo mismo que poner if - else

    if (actual->child1 != NULL) {
        recorrerImprimir(actual->child1, nivel + 1);
    }
    if (actual->child2 != NULL) {
        recorrerImprimir(actual->child2, nivel + 1);
    }
    return;
}

void insChild(Node* parent, int newValue) {
    Node* child = createNode(newValue);
    if (parent->child1 == NULL) {
        parent->child1 = child;
        child->parent = parent;
    } else if (parent->child2 == NULL) {
        parent->child2 = child;
        child->parent = parent;
    } else {
        perror("No se admiten mas hijos");
        exit(1);
    }
    return;
}
