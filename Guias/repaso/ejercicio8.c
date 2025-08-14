/*Implemente un código que pida al usuario dos números y 
una operación (+, -, *, /) y realice la operación correspondiente.*/

#include<stdio.h>

int main(){
  float num1,num2,resultado;
  char operador;

  printf("Ingrese el primer n%cmero: ",163);
  scanf("%f", &num1);
  printf("Ingrese el segundo n%cmero: ",163);
  scanf("%f", &num2);

  printf("Ingrese el operador (+, -, *, /): ");
  scanf(" %c", &operador);

  switch(operador) {
    case '+':
      resultado = num1 + num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '-':
      resultado = num1 - num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '*':
      resultado = num1 * num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '/':
      if(num2 != 0) {
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
      } else {
        printf("Error: Divisi%cn por cero.\n", 162, 162);
      }
      break;
    default:
      printf("Operador no v%clido.\n", 160, 160);
      break;
  }

  return 0;
}