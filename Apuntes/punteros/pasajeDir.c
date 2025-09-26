#include<stdio.h>

int main(){
  int *p,*q;
  int a,b;

  printf("..........:Direcci%cn de los punteros:.........\n",162);
  printf("Direcci%cn del puntero *p: %p\n",162,&p);
  printf("Direcci%cn del puntero *q: %p\n",162,&q);
  //le asigno a las variables enteras valores 
  a=40;
  b=15;
  printf("A=%d\n",a);
  printf("B=%d\n",b);
  //Asigno a los punteros las variables para que guarden las direcciones
  p=&a;
  q=&b;
  printf("\n..........:Direcci%cn de las variables:.........\n",162);
  printf("Direcci%cn de la variable A: %p\n",162,p);
  printf("Direcci%cn de la variable B: %p\n",162,q);
  /*-------------------------------------------------------------------------------------*/
  //getchar();  //pausa del sistema
  printf("\n\n..........:Tabla Resumen:.........\n");
  printf("Direcci%cn del puntero *p: %p\n",162,&p);  
  printf("Direcci%cn del puntero *p en decimal: %d\n",162,&p);
  printf("Direcci%cn contenida en el puntero *p (A): %p\n",162,p);  
  printf("Direcci%cn de la variable A: %p\n",162,&a);
  printf("Valor de la variable A: %d\n",*p);

  printf("\nDirecci%cn del puntero *q: %p\n",162,&q);
  printf("Direcci%cn del puntero *q en decimal: %d\n",162,&q);   
  printf("Direcci%cn contenida en el puntero *q (B): %p\n",162,q);
  printf("Direcci%cn de la variable B: %p\n",162,&b);
  printf("Valor de la variable B: %d\n",*q);

  printf("\n.........:Cambio de valores en las variables:.............");
  b= *p;   //la variable b toma el valor contenido en la direccion del puntero p
  printf("\nNuevo valor de B: %d",b);
  printf("\nDirecci%cn contenida en el puntero *q (B): %p\n",162,q);

  *p=10;
  printf("\nNuevo valor de A: %d",a);
  printf("\nDirecci%cn contenida en el puntero *p (A): %p\n",162,p);

  *q=*p;
  printf("\nNuevo valor de B: %d",b);

  return 0;
}