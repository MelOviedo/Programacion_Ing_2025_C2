#include<stdio.h>

int main(){
  int x=2;

  printf("x= %d\n",x);
  printf("Direccion de x en decimal: %llu\n",(unsigned long long)&x);
  printf("Direccion de x en Hexadecimal: %p\n",(void*)&x);    //asi se escribe la direccion de memoria desde la variable
  printf("\n\n");


  int *p;     // *indica que es un puntero a entero
  p=&x;   //Le paso la dirección de memoria de x a p

  //Asi se calcula la direccion del puntero
  printf("Direccion de p: %p\n",(void*)&p);
  //Direccion de la variable a la que apunta p
  printf("Direccion a la que apunta p: %p\n",(void*)p);
  //Valor de la variable a la que apunta
  printf("Valor de la variable a la que apunta el puntero: %d\n",*p);


  return 0;
}