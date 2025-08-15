/*Generar valores del sistema de manera aleatorio dentro de un rango*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL)); // Inicializa la semilla para la generación de números aleatorios
  printf("%d\n", rand()%101); // Genera un número aleatorio entre 0  100
  printf("%d\n", rand()%201);
  printf("%d\n", rand()%301);

  return 0;
}