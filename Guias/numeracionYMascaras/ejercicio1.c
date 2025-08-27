/*
Armar un código en C para mostrar por pantalla los diferentes tamaños de los 
tipos: char, short, int, long, float y double.
*/

/*Tipos de datos*/

#include <stdio.h>

void tipoDeVariables(){
    /* Tipo de Datos */
    printf("\t\t\tTipos de datos\n");
    /*
          ---------------------------------  
          | Tipo      |     Peso        |
          --------------------------------- 
          |  int      |    4 bytes      |
          |  float    |    4 bytes      |
          |  char     |    1 bytes      |
          |  double   |    8 bytes      |
          |      |         |
          ---------------------------------
*/  
    int x;
    float y;
    char c;
    double dd;

    printf("Tama%co de un entero: %d Bytes\n",164,sizeof(x));
    printf("Tama%co de un floatante: %d Bytes\n",164,sizeof(y));
    printf("Tama%co de un caracter: %d Byte\n",164,sizeof(c));
    printf("Tama%co de un double: %d Bytes\n",164,sizeof(dd));

}


int main(){
  tipoDeVariables();
  return 0;
}