/*Elimina un caracter
en mi caso el '\n' que se genera al usar fgets (guarda el \n al apretar enter en el input)
*/

#include<stdio.h>
#include<string.h>

#define MAX 100

void eliminarCaracterManual(char cadena[]){
  int i;

  for(i=0; i < strlen(cadena);i++){
    if (cadena[i] == '\n'){
      cadena[i]='\0'; //aca se puede reemplazar por otro caracter
      break; //no lo creo necesario pero lo pongo por si es otro caracter que no sea el '\n'
    }
  }

}


int main(){
  char frase[MAX],cadena2[MAX];
  int i,cont=0,longCadena,condicion;

  printf("Ingrese una frase:");
  fgets(frase,MAX,stdin);
  strcpy(cadena2,frase);

  printf("Longitud de la cadena Original: %d\n",strlen(frase));
  eliminarCaracterManual(cadena2);
  longCadena=strlen(cadena2);
  printf("Longitud de la cadena2: %d\n",longCadena);

  //elimina el "\n" si existe
  frase[strcspn(frase, "\n")] = '\0';   //Se usa comillas " " porque comparo cadena, y '' porque uso un caracter
  longCadena=strlen(frase);
  printf("Longitud de la cadena: %d\n",longCadena);

  return 0;
}
