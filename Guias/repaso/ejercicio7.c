/*Implemente un código que pida al usuario una frase 
y cuente cuántas vocales hay en la frase.*/

#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){
  char frase[MAX];
  int i,cont=0,longCadena,condicion;

  printf("Ingrese una frase:");
  fgets(frase,MAX,stdin);
  
  //elimina el '\n' si existe
  frase[strcspn(frase, "\n")] = '\0';

  longCadena=strlen(frase)-1; //-1 para no contar el '\0'

  for(i=0; i<longCadena; i++){
    condicion= frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u' ||
       frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U';

    if(condicion==1){
      cont++;
    }
  }

  printf("La frase %s tiene %d vocales.",frase,cont);

  return 0;
}
