/*Implemente un código que declare un vector de 5 enteros,
 pida al usuario que ingrese los valores y luego los imprima.*/


#include<stdio.h>

#define N 5

void cargaVector(int vec[]){
  int i;
  printf("Carga del vector\n");
  for(i = 0; i<N; i++){
    printf("Ingrese el valor %d: ",i+1);
    scanf("%d",&vec[i]);
  }
}

void imprimirVector(int vec[]){
  int i;
  printf("\nLos valores ingresados son:\n");
  for(i = 0; i<N; i++){
    printf("%d\t",vec[i]);
  }
}

int main(){
  int vector[N];

  cargaVector(vector);
  imprimirVector(vector);

  return 0;
}