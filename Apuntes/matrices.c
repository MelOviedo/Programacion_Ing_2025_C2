
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void cargaMatriz(int matriz[][C]){
  srand(time(NULL));
  int i,j,inicio=10, fin=100;

  for (i=0;i<R;i++){
    for (j=0;j<C;j++){
      matriz[i][j] =inicio + rand() % (fin - inicio + 1);
    }
  }
}

void mostrarMatriz(int matriz[][C]){
  int i,j;
  printf("Matriz generada:\n");
  for (i=0;i<R;i++){
    for (j=0;j<C;j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}

void mostrarDiagonalPrincipal(int matriz[][C]){
  int i;
  printf("\nDiagonal Principal:\n");

  for(i=0; i<R; i++){
    printf("%d\t",matriz[i][i]);
  }

}

void mostrarDiagonalSecundaria(int matriz[][C]){
  int i,j;
  printf("\nDiagonal Secundaria:\n");

  for(i=0; i<R; i++){
    for(j=C-1; j>=0; j--){
      if(i+j == R-1){
        printf("%d\t", matriz[i][j]);
      }
    }
  }

}

void mostrarColumna(int matriz[][C], int c){
  int i;

  printf("\nColumna %d:\n", c);
  for(i=0; i<R; i++){
    printf("%d\n", matriz[i][c]);
  }
}

void mostrarRenglon(int matriz[][C], int r){
  int j;

  printf("\nRenglon %d:\n", r);
  for(j=0; j<C; j++){
    printf("%d\t", matriz[r][j]);
  }
}

int main(){
  int matriz[R][C];
  int r=2,c=0,elemento;

  cargaMatriz(matriz);
  mostrarMatriz(matriz);

  mostrarDiagonalPrincipal(matriz);
  mostrarDiagonalSecundaria(matriz);
  
  //Aca le pedis al usuario que ingrese un valor de columna y renglon para que muestre el elemento de la matriz
  /*
  printf("\nIngrese el renglon del elemento que desea mostrar (0 a %d): ", R-1);
  scanf("%d", &r);
  printf("\nIngrese la columna del elemento que desea mostrar (0 a %d): ", C-1);
  scanf("%d", &c);
  */
  elemento = matriz[r][c];
  printf("\nElemento en la posicion [%d][%d]: %d\n", r, c, elemento);

  mostrarColumna(matriz, c);
  mostrarRenglon(matriz, r);

  return 0;
}