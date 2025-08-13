/*Construye un programa que permita ingresar las medidas de los lados de un rectángulo
 el mismo debe emitir por pantalla su superficie y su perímetro*/

 #include<stdio.h>

 int main(){
  float base,altura,sup,perimetro;

  printf("Ingrese la base del rect%cngulo: ",160);
  scanf("%f",&base);
  printf("Ingrese la altura del rect%cngulo: ",160);
  scanf("%f",&altura);

  sup=base*altura;
  perimetro=2*(base+altura);

  printf("Superficie:%.2f\n",sup);
  printf("Perimetro:%.2f\n",perimetro);

  return 0;
 }