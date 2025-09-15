/*
Realizar una funcion que implemente un BubbleSort:

El Bubble Sort es un algoritmo de ordenamiento que funciona
-revisando cada elemento de la vector que va a ser ordenada con el siguiente,
-intercambiándolos de posición si están en el orden equivocado.
-repetir el proceso hasta que no se necesiten másintercambios

*/
#include <stdio.h>
#include <stdlib.h>

#include "vectores.h"

void mostrarVector(int* vector, int longitud);
void BubbleSort(int* vector, int longitud);
void Intercambio(int* x, int* y);

int main() {
    int size = sizeof(shortVector) / sizeof(shortVector[0]);

    printf("\nVector inicial: \n\t");
    mostrarVector(shortVector, size);

    BubbleSort(shortVector, size);

    printf("\nBubble Sort: \n\t");
    mostrarVector(shortVector, size);

    return 0;
}

void mostrarVector(int* vector, int longitud) {
    for (int i = 0; i < longitud; i++) {
        printf("%d, ", vector[i]);
    }
    printf("\n");
}

void Intercambio(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int* vector, int longitud) {
    for (int j = 0; j < longitud - 1; j++) {
        for (int i = 0; i < longitud - j - 1; i++) {
            if (vector[i] > vector[i + 1]) {
                Intercambio(&vector[i], &vector[i + 1]);
            }
        }
    }
}