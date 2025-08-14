/*Implemente un código que pida al usuario un número y determine si es par o impar.*/

#include<stdio.h>

int main(){
  int num,validar;

  printf("Ingrese un n%cmero: ",163);
  scanf("%d",&num);

  validar = num % 2;

  if(validar == 0){
    printf("El n%cmero %d es par.\n",163, num);
  }else{
    printf("El n%cmero %d es impar.\n",163, num);
  }

  return 0;
}