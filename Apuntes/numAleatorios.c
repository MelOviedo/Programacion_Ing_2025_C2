/*Generar valores del sistema de manera aleatorio*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL)); // Inicializa la semilla para la generación de números aleatorios
  printf("%d\n", rand()); // Genera un número aleatorio
  printf("%d\n", rand());
  printf("%d\n", rand());

  return 0;
}