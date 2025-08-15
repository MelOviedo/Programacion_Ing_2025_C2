/*Generar un valor aleatorio con un rango de inicio  y de fin*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL)); // Inicializa la semilla para la generación de números aleatorios

  int n,inicio=10,fin=100;

  n = inicio + rand() % (fin - inicio + 1);

  printf("%d\n", n); // Genera un número aleatorio


  return 0;
}