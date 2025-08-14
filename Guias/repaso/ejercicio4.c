/*Implemente un código que pida al usuario un número del 1 al 7 y muestre el día de la semana correspondiente.*/

#include<stdio.h>

int main(){
  int opcion;

  printf("Ingrese un n%cmero del 1 al 7: ",163);
  scanf("%d",&opcion);

//Lo ideal sería poner un doWhile
  switch (opcion){
  case 1:
    printf("Lunes\n");
    break;
  case 2:
    printf("Martes\n");
    break;
  case 3:
    printf("Miercoles\n");
    break;
  case 4:
    printf("Jueves\n");
    break;
  case 5:
    printf("Viernes\n");
    break;
  case 6:
    printf("Sabado\n");
    break;
  case 7:
    printf("Domingo\n");
    break;
  default:
    printf("La opcion ingresada es invalida\n");
    break;
  }

  return 0;
}