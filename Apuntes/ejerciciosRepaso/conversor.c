/*Leer un número entero y mostrar su valor en binario, octal y hexa*/
#include<stdio.h>

#define N 32 //porque un entero tiene 32 bits
#define BCD 4 //porque cada dígito lo represento con 4 bists


void limpiarVector(int vec[],int n){
  int i;
  for (i = 0; i<n ; i++){
    vec[i]=0;
  }
}

void imprimirVector(int vec[],int i){
  for ( i-- ; i>=0; i--){
    printf("%d",vec[i]);
  }
}

int binario(int num, int bin[]){
  int i=0,resto;
  
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

void bin2(int num,int vec[]){
  int i,resto;
  
  for(i=0; i<4; i++){  
    vec[i] = num % 2;   // se guarda del último al primero (MSB a LSB)
    num /= 2;
  }
}

void bcd(int num){
  int u,d,c,aux;
  int vec1[BCD],vec2[3];

  u = num % 10;
  d = (num / 10) % 10;
  c = (num / 100) % 10;

  vec2[0] = c;
  vec2[1] = d;
  vec2[2] = u;

  printf("\nBCD: ");
  for(int i=0; i<3; i++){
    aux = vec2[i];
    limpiarVector(vec1, BCD);
    bin2(aux, vec1);
    imprimirVector(vec1, BCD);
    printf("  ");
  }
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

  //Sólo BCD sirve para números entre 100 y 999 
  if(num>=100 && num<=999){
    bcd(num);
  }

  return 0;
}