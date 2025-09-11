#include <stdio.h>
#include <stdint.h>   // para los enteros de tamaño fijo
#include <limits.h>   // para ver límites de tipos estándar

int main(void) {
    printf("sizeof(unsigned int) = %zu bytes\n", sizeof(unsigned int));
    printf("Rango unsigned int: 0 .. %u\n", UINT_MAX);

    printf("\nsizeof(uint16_t) = %zu bytes\n", sizeof(uint16_t));
    printf("Rango uint16_t: 0 .. %u\n", UINT16_MAX);

    return 0;
}