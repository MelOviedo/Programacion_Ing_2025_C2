/*Leer un número entero y verificar si está entre 100 y 500 
  inclusive y si es múltiplo de 5.
*/

#include <stdio.h>

int main() {
  int num;
  int enRango, multiplo5;

  printf("Ingrese un n%cmero entero: ", 163);
  scanf("%d", &num);

  enRango = (num >= 100 && num <= 500);
  multiplo5 = (num % 5 == 0);

  if (enRango && multiplo5) {
    printf("El n%cmero ingresado est%c entre 100 y 500 y es m%cltiplo de 5.\n",163,160,163);
  } else if (enRango && !multiplo5) {
    printf("El n%cmero ingresado no es m%cltiplo de 5 y est%c entre 100 y 500.\n",163,163,160);
  }else if (!enRango && multiplo5) {
    printf("El n%cmero ingresado no est%c entre 100 y 500 pero es m%cltiplo de 5.\n",163,160,163);
  } else {
    printf("El n%cmero ingresado no es m%cltiplo de 5 y no est%c entre 100 y 500.\n",163,163,160);
  }

  return 0;
}
