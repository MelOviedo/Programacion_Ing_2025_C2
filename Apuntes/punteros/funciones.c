#include <stdio.h>

typedef struct {
    int id;
    float valor;
} Sensor;


void cambiarValor(int *p) {
  *p = 42; // modifico lo que apunta
}

void mostrarVector(int *vec, int n) {
  printf("\nVector: ");
  for(int i = 0; i < n; i++) {
    printf("%d\t", vec[i]); // equivalente a *(vec+i)
  }
  printf("\n");
}

void mostrarSensor(const Sensor *s) {
  printf("\nSensor:\n");
  printf("ID: %d - Valor: %.2f\n", s->id, s->valor);
}

void modificarSensor(Sensor *s) {
  s->valor += 10.0; // modifico el campo
}

int main() {
  int x = 10;
  int numeros[] = {1, 2, 3, 4, 5};
  Sensor s = {1, 25.5};

  printf("Antes: %d\n", x);
  cambiarValor(&x); // paso la dirección de x
  printf("Despu%cs: %d\n",130,x);

  mostrarVector(numeros, 5); // paso la dirección base

  mostrarSensor(&s);
  modificarSensor(&s);
  mostrarSensor(&s);

  return 0;
}