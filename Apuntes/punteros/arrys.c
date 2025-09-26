#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


int main(){
  srand(time(NULL));
  int a[N];
  int i;
  int *pa;

  pa=&a[0];
  
  for(i = 0; i<N; i++){
    *(pa+i)=rand()%101;
  }
  printf("vector: ");
  for(i=0 ; i<N; i++){
  printf("%d\t",*(pa+i));
  }

  a[0]=15;
  a[7]=34;


  printf("\n\nDireccion de a: %p\n",&a);
  printf("Direccion a la que apunta el puntero pa: %p\n",pa);
  //Como acceder a los valores del vector usando puntero
  printf("Valor contenido en la posicion 0 de a: %hhd\n",*pa);    //para mostrar char como enteros de un byte de tamaño
  printf("Valor contenido en la posicion 7 de a: %d\n",*(pa+7));

  printf("\nvector: ");
  for(i=0 ; i<N; i++){
  printf("%d\t",*(pa+i));
  }

  return 0;
}