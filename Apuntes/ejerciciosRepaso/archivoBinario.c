/*
- creo un archivo bin
- leo un archivo bin
- modifico un archivo bin
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 100

void cargaMatriz(int matriz[][N]){
  srand(time(NULL));
  int i,j,inicio=10, fin=100;

  for (i=0;i<N;i++){
    for (j=0;j<N;j++){
      matriz[i][j] =inicio + rand() % (fin - inicio + 1);
    }
  }
}

void mostrarMatriz(int matriz[][N]){
  int i,j;
  printf("Matriz:\n");
  for (i=0;i<N;i++){
    for (j=0;j<N;j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}


int menu(){
  int t;
    printf("Men%c\n",163);
    printf("1.Crear archivo\n");
    printf("2.Leer archivo\n");
    printf("3.Modificar archivo\n");
    printf("4.Limpiar terminal\n");
    printf("5.salir\n");
    scanf("%d",&t);
  return t;
}

void crearArchivo(FILE *id,int mat[][N]){
  char nombreArchivo[]="matriz2.dat";//para no pisar el archivo existente "matriz.dat"
  id=fopen(nombreArchivo,"wb"); 
  if(id==NULL){
    perror("Error al abrir el archivo\n");
    return;
  }else{
  //Modo rápido de escritura
    fwrite(mat,sizeof(int),N*N,id); //fwrite(puntero,tamDelDato,cantDeDatos,id);
    //puntero:direccion de memoria del primer elemento
    //tamDelDato: tamaño del dato que se va a escribir, daba lo mismo usar sizeof(int) o sizeof(mat[0][0]) o 4//tamaño del int
    //cantDeDatos: cantidad de datos que se van a escribir, al ser una matriz se multiplica renglones*columnas
    //id: archivo donde se va a escribir
    
    //Modo lento de escritura -> útil cuando se quiere escribir un elemento por vez
    /*for(int i=0; i<N; i++){
      for(int j=0;j<N;j++){
        fwrite(&mat[i][j],sizeof(int),1,id); //escribo elemento por elemento
        //fwrite(direccionDelElemento,tamDelDato,cantDeDatos,id);
      }
    }*/
  }
  fclose(id);
}

void leerArchivo(FILE *id,int mat[][N]){
  id=fopen("matriz.dat","rb");
  if(id==NULL){
    perror("Error al abrir el archivo\n");
    return;
  }else{
  //Modo rápido de escritura
    fread(mat,sizeof(int),N*N,id); //fwrite(puntero,tamDelDato,cantDeDatos,id);
  }
  fclose(id);
}

void modificarArchivo(FILE *id,int mat[][N]){
  int fila, col, nuevo;
  long pos;

  printf("Ingrese fila a modificar (0-%d): ", N-1);
  scanf("%d",&fila);
  printf("Ingrese columna a modificar (0-%d): ", N-1);
  scanf("%d",&col);

  printf("Nuevo valor: ");
  scanf("%d",&nuevo);

  id=fopen("matriz.dat","r+b");
  if(id==NULL){
    perror("Error al abrir el archivo\n");
    return;
  }

  pos = (fila * N + col) * sizeof(int);
  fseek(id, pos, SEEK_SET);
  fwrite(&nuevo, sizeof(int), 1, id);
    
  fclose(id);

  printf("Matriz modificada\n");
  mostrarMatriz(mat);
}



int main(){
  FILE *id;

  int mat[N][N],opcion;
  cargaMatriz(mat);
//  mostrarMatriz(mat);

  do{
    switch (opcion=menu()){
    case 1:
      crearArchivo(id,mat);
      break;
    case 2:
      leerArchivo(id,mat);
      mostrarMatriz(mat);
      break;
    case 3:
      printf("Matriz sin modificar\n");
      mostrarMatriz(mat);
      modificarArchivo(id,mat);
      
      /*printf("Matriz modificada\n");
      mostrarMatriz(mat);*/
      break;
    case 4:
      system("cls");    //solo funciona en Windows
      break;
    case 5:
      printf("Salir.\n"); 
    default:
      break;
    }
  }while (opcion!=5);
  

  return 0;
}