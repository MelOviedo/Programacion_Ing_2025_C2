/*Validar el ingreso de un número positivo*/

#include <stdio.h>

int main() {
    int num;
    do {
        printf("Ingrese un n%cmero positivo: ",163);
        scanf("%d", &num);
    } while (num <= 0);

    printf("N%cmero v%clido ingresado: %d\n",163,160, num);
    return 0;
}