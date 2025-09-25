/*
    Se quiere leer un archivo con n numeros para luego guardarlos en un vector, este debe modificar su tamaño en cada lectura.
    Imprima el tamaño final de la lista.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file;
    int i = 0, temp;

    file = fopen("lista.bin", "rb+");
    if (file == NULL) {
        perror("Error al abrir el archivo");
    }

    int* lista = malloc(sizeof(int));
    if (lista == NULL) {
        perror("Error de asignación de memoria");
        return 1;
    }

    while (fread(&lista[i], sizeof(int), 1, file)) {
        i++;
        lista = (int*)realloc(lista, sizeof(int) * (i + 1));
        if (lista == NULL) {
            perror("Error de asignación de memoria");
            return 1;
        }
    }

    printf("\nTamaño de la lista: %d ", i);
    free(lista);
    fclose(file);

    return 0;
}

int main() {
    FILE* file;
    int i = 0, temp;

    file = fopen("lista.bin", "rb+");
    if (file == NULL) {
        perror("Error al abrir el archivo");
    }

    while (fread(&temp, sizeof(int), 1, file)) {
        i++;
    }
    rewind(file);

    int* lista = malloc(sizeof(int) * i);
    if (lista == NULL) {
        perror("Error de asignación de memoria");
        return 1;
    }

    i = 0;
    while (fread(&lista[i], sizeof(int), 1, file)) {
        i++;
    }

    printf("\nTamaño de la lista: %d ", i);
    free(lista);
    fclose(file);

    return 0;
}
