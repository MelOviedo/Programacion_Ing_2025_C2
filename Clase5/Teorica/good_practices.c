#include <stdio.h>
#include <stdlib.h>


int main() {

  long* good_malloc = (long*) malloc(sizeof(long));
  /* Tengo que verificar que la memoria se haya asignado correctamente antes de continuar */
  if (good_malloc == NULL){ 
    fprintf(stderr, "Error: Memory allocation failed.\n");
    exit(EXIT_FAILURE); /* Si esta alocacion falla quiero salir del programa */
  }
  /* Inicializar los elementos del bloque tambien es buena practica,
   * pero no hacerlo no es una falta grave.
   */
  *good_malloc = 0;

  /* El caso de calloc seria identico, pero los elementos ya estan inicializados */
  char* good_calloc = (char*) calloc(15, sizeof(char));
  if (good_calloc == NULL){ 
    fprintf(stderr, "Error: Memory allocation failed.\n");
  }

  /* El caso de realloc es un poco mas complejo, porque tenemos que tener en cuenta
   * el caso C.
   */
  
  /* En general, siempre es buena practica inicializar cualquier tipo de variable.
   * En el caso de los punteros, esto es particularmente importante, por que un
   * puntero no inicializado puede 'apuntar' a cualquier lado, siendo capaz
   * de corromper memoria que no este relacionada con el programa.
   */
  long* aux_for_realloc = NULL; 
  aux_for_realloc = (long*) realloc(good_malloc, 10*sizeof(long));
  if (aux_for_realloc == NULL){
    /* Si fallo libero el bloque original */
    fprintf(stderr, "Error: Memory re-allocation failed.\n");
    free(good_malloc); 
  } else{
    /* Si funciona, 'updateo' el pointer original 
     * Esto es necesario porque puede que el bloque se haya movido.
     */
    good_malloc = aux_for_realloc;
  }


  /* Siempre recordar liberar la memoria del programa! */
  free(good_malloc);
  free(good_calloc);
  /* No tengo que liberar aux_for_realloc, por que es el mismo bloque que good_malloc */

  return 0;
}

void* real_life_example(void* ptr, size_t current_size, size_t target_size) {
  void* new_ptr = NULL;
  size_t new_size = target_size;

  while (new_size > current_size) {
    new_ptr = realloc(ptr, new_size);
    if (new_ptr != NULL) {
      return new_ptr; /* Si logro cambiar el tamanio, salgo de la funcion */
    }
    new_size /= 2; /* Si fallo, intento de nuevo con un bloque mas chico */
  }

  /* Si llegue hasta aca quiere decir que no pude agrandar el bloque original */
  fprintf(stderr, "Error: Unable to allocate memory even with reduced size.\n");
  return NULL; 
}