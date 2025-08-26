/*Limpieza de un vector*/

#include<stdio.h>

#define N 5

/*Es una buena práctica tener como argumento extra la dimensión del vector, porque puede ser que no siempre la sepamos*/
void imprimirVector(int vec[],int n){
  int i;

  for(i=0;i<n;i++){
    printf("%d\t",vec[i]);
  }
}

void limpiarVector(int vec[]){
  int i;
  for(i=0;i<N;i++){
    vec[i]=0;
  }
}

void imprimirVectorReversa(int vec[],int i){
  for ( i ; i>0; i--){
    printf("%d\t",vec[i]);
  }
}

void cargaVector(int vec[]){
  int i;
  printf("Carga del vector\n");
  for(i = 0; i<N; i++){
    printf("Ingrese el valor %d: ",i+1);
    scanf("%d",&vec[i]);
  }
}

int main(){
  int vec[N];

  printf("Vector sin Limpiar\n");
  imprimirVector(vec,N);

  printf("\nVector en reversa\n");
  imprimirVectorReversa(vec,N); 

  limpiarVector(vec);
  printf("\nVector Limpio\n");
  imprimirVector(vec,N);

  cargaVector(vec);
  printf("\nVector Cargado\n");
  imprimirVector(vec,N);

  return 0;
}
