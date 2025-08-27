  /*Descomponer un número*/

#include<stdio.h>

int main(){
  int num=169;  //Puedo pedirlo por terminal
  int unidad,decena,centena;

  unidad = num % 10;
  decena = (num / 10) % 10;
  centena = (num / 100) % 10;

  printf("N%cmero: %d\n",163,num);
  printf("Centena: %d\n", centena);
  printf("Decena: %d\n", decena);
  printf("Unidad: %d\n", unidad);


  return 0;
}