/*Implemente un código que pida números hasta que el usuario ingrese 0
a. calcule la suma de los números ingresados.
b. devuelva el numero mas grande.*/

#include<stdio.h>

int main(){
  int condicion;
  float num,acumulador,max=-999999;

  printf("Ingrese un n%cmero: ",163);
  scanf("%f",&num);
  condicion= num != 0;

  acumulador = 0;

  while (condicion){
    acumulador += num;
    if(num>max){
      max=num;
    }

    printf("Ingrese un n%cmero: ",163);
    scanf("%f",&num);
    condicion= num != 0;
  }
  
  printf("Acumulador: %.2f\n",acumulador);
  printf("El n%cmero m%cximo ingresado: %.2f\n",163,160,max);
  
  return 0;
}