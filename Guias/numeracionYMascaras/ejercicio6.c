/*Realice un código que, tomando un uint16 como entrada, devuelva los 8
bits mas significativos.*/


#include<stdio.h>
#include<stdint.h>

#define BITS 16

void imprimirEnBinario(uint16_t num) {
    for(int i = BITS - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}



int main(){
  uint16_t num,maSignificativos;
  /*printf("Ingrese un numero entero positivo (0 a 65535): ");
  scanf("%hu",&num);*/
  num=0b1001010111100100;
  printf("El numero ingresado es: %hu\n",num);
  printf("El numero en binario es: ");
  imprimirEnBinario(num);

  maSignificativos=num>>8; //desplazo 8 bits a la derecha
  //1001010111100100>>8=0000000010010101
  printf("Los 8 bits mas significativos son: %hu\n",maSignificativos);
  printf("El numero en binario es: ");
  imprimirEnBinario(maSignificativos);
  return 0;
}