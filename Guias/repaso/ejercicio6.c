/*Implemente un código que pida al usuario un número y 
calcule su factorial utilizando un bucle for/while.
*/

#include<stdio.h>

void factorial(int n){
  int i, fact=1;

  if(n==0){
    printf("Factorial de 0 : 1\n");
  }else{
    for(i=1; i<=n; i++){
      fact *= i;
    }
    printf("Factorial de %d : %d\n", n, fact);
  }
}

int main(){
  int num;

  do{
    printf("Ingrese un n%cmero entero no negativo: ",163);
    scanf("%d", &num);
  } while (num<0);
  factorial(num);

  return 0;
}