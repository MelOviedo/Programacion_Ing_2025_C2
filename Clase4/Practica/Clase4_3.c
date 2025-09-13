/*
1 - Implementar una función en C para imprimir los elementos de un vector de enteros.
2 - Implementar un algoritmo de ordenamiento simple en C.

Define una función llamada EasySort que reciba dos parámetros:
    Un puntero a un array de enteros (vector).
    Un entero que representa la longitud del array (longitud).

La función debe:
-Crear un array temporal para almacenar los elementos ordenados.
-Recorrer el array original y copiar los elementos en el array temporal en orden creciente.
es decir, iterativamente, encuentra el mínimo de los elementos restantes y se coloca en
la siguiente posición del array temporal.
-Finalmente, copiar los elementos del array temporal de vuelta al array original.
*/

#include <math.h>
#include <stdio.h>

#include "vectores.h"

void mostrarVector(int* vector, int longitud);
void EasySort(int* vector, int longitud);

int main() {
    int size = sizeof(shortVector) / sizeof(shortVector)[0];

    printf("\nVector inicial: \n\t");
    mostrarVector(shortVector, size);

    printf("\nEasy Sort: \n\t");
    EasySort(shortVector, size);
    mostrarVector(shortVector, size);

    return 0;
}

void mostrarVector(int* vector, int longitud) {
    int i;

    for (i = 0; i < longitud; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

void EasySort(int* vector, int longitud) {
    unsigned int i, j, temp[longitud], lastMin = 0, min;

    for (j = 0; j < longitud; j++) {
        for (i = 0; i < longitud; i++) {
            if ((vector[i] < min) && (vector[i] > lastMin)) {
                min = vector[i];
            }
        }
        lastMin = min;
        temp[j] = min;
    }
    for (i = 0; i < longitud; i++) {
        vector[i] = temp[i];
    }
}