/*Leer un número entero y mostrar su valor en binario, octal y hexa*/
#include<stdio.h>

#define N 32 //porque un entero tiene 32 bits

void limpiarVector(int vec[],int n){
  int i;
  for (i = 0; i<n ; i++){
    vec[i]=0;
  }
}

void imprimirVector(int vec[],int i){
  for ( i ; i>=0; i--){
    printf("%d",vec[i]);
  }
}

int binario(int num, int bin[]){
  int i,resto;
  
  while(num!=0 && i<N){
    resto=num%2;
    bin[i]=resto;
    num=num/2;
    i++;
  }
  i--;  //ya que se le agrego un valor extra al contador
  return i;
}

int octal(int num, int bin[]){
  int i,resto;
  
  while(num!=0 && i<N){
    resto=num%8;
    bin[i]=resto;
    num=num/8;
    i++;
  }
  i--;  //ya que se le agrego un valor extra al contador
  return i;
}

int hexa(int num, int bin[]){
  int i,resto;
  
  while(num!=0 && i<N){
    resto=num%16;
    bin[i]=resto;
    num=num/16;
    i++;
  }
  i--;  //ya que se le agrego un valor extra al contador
  return i;
}

void imprimirHexa(int vec[],int i){
  for (i;i>=0; i--){
    if(vec[i]<10){
      printf("%d",vec[i]);
    }else{
      switch (vec[i]) {
        case 10: printf("A"); break;
        case 11: printf("B"); break;
        case 12: printf("C"); break;
        case 13: printf("D"); break;
        case 14: printf("E"); break;
        case 15: printf("F"); break;
        default: printf("?"); break;
      }
    }
  }
}

int main(){
  int num,i;
  int bin[N],oct[N],hex[N];

  printf("Ingrese un n%cmero entero: ",163);
  scanf("%d",&num);

  limpiarVector(bin,N);
  limpiarVector(oct,N);

  printf("N%cmero decimal: %d\n",163,num);


  i=binario(num,bin);
  printf("N%cmero Binario: ",163);
  imprimirVector(bin,i);

  i=octal(num,oct);
  printf("\nN%cmero Octal: ",163);
  imprimirVector(oct,i);

  i=hexa(num,hex);
  printf("\nN%cmero Hexadecimal: ",163);
  imprimirHexa(hex,i);

  return 0;
}