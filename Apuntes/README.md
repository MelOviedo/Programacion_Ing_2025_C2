[Index](./index.md) | [Sist. de Numeración, Máscaras y Shif](./mascarasYShif.md)  

# <center> 📚 Contenido 
## <center>🔰 Ejemplos
0. [Hola Mundo](./ejerciciosRepaso/holaMundo.c)
1. [Tipo de Datos](./ejerciciosRepaso/tipoDeDato.c)
2. [Operacionales Binarios](./ejerciciosRepaso/operacionales.c)
3. [Operacionales Relacionales y Lógicos](./ejerciciosRepaso/rangoMultiple.c)
4. [Validación de un número](./ejerciciosRepaso/validoNum.c)
5. [For anidado - Dibuja un Triangulo](./ejerciciosRepaso/triangulo.c)
6. [Recorrer Vector](./ejerciciosRepaso/recorrerVector.c)
7. [Conversor](./ejerciciosRepaso/conversor.c)
8. [Números aleatorios fijos](./ejerciciosRepaso/numAleatoriosFijos.c)
9. [Números aleatorios](./ejerciciosRepaso/numAleatorios.c)
10. [Números aleatorios en un rango](./ejerciciosRepaso/numAleatoriosRango.c) 
11. [Números aleatorios en un rango de Inicio y Fin](./ejerciciosRepaso/numAleatoriosIF.c) 
12. [Recorrer Matrices](./ejerciciosRepaso/matrices.c)
13. [Eliminar un Caracter](./ejerciciosRepaso/eliminarCaracter.c)
14. [Archivo Texto](./ejerciciosRepaso/archivoTexto.c)
15. [Archivo Binario](./ejerciciosRepaso/archivoBinario.c)

## <center>📂Banco de Apuntes

### Variable  
En programación, una variable está formada por un lugar en la memoria y un **identificador** (nombre simbólico) que está asociado a dicho espachi. Ese espacio contiene una información conocida o desconocida, es decir un *dato*.

### Tipos de variables
|Tipo de Dato|Tamaño|
|-----------|:---:|
| char | 1 byte | 
| short | 2 bytes |
| int | 4 bytes |
| long | 4 bytes |
| float | 4 bytes |
| double | 8 bytes |
| long double | 16 bytes |
| bool | 1 byte |

> [!TIP]
> 1 byte = 8 bits

[Script de tipo de Datos](./ejerciciosRepaso/tipoDeDato.c)

---
### Directivas  
Las palabras que empiezan con *#* se denominan directivas.  

**#define**  $\rightarrow$ Para definir constantes.  
**#include** $\rightarrow$ Para incluir el contenido de un *archivo.h*, se usa para importar funciones, variables, contantes, etc. de bibliotecas.  

```c
#include<stdio.h> //Invoco a la biblioteca stdio.h

#define N 5  //Sólo puede contener el valor de una constante
#define PI 3.1415926
``` 
---
### Tipos y especificadores de formato en las salidas printf  
| Especificador | Significado | | Especificador | Significado |
|:---:|:---| --- |:---:|:---|
| %c | Caracter | | %s | Cadena de texto |
| %d | Número Entero (int) | | %u | Entero sin signo |
| %D ó %ld | Número entero long | | %U | Entero sin signo long |
| %i | Número Entero (int) | | %x | Hexadecimal sin signo con minúscula |
| %f | Punto flotente (float) | | %X | Hexadecimal sin signo con mayúscula |
| %e | Notación científica con e minúscula | | %p | Puntero, dirección de memoria |
| %e | Notación científica con E mayúscula | | %n | Números de caracteres |
| %g | Utiliza %f o %e según sea más corto | | %zu | size_t en formato decimal sin signo |
| %G | Utiliza %f o %E según sea más corto | | %O ó %lo | Formato entero octal long |
| %o | Número octal sin signo | | %lf | Formato double |

---
### Operadores Binarios
| Operador | Símbolo |
|-----------|:---:|
| Suma  | + |
| Resta  | - |
| Multiplicación  | * |
| División  | / |
| Módulo  | % |

[Script Operadores Binarios](./ejerciciosRepaso/operacionales.c)  
[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./ejerciciosRepaso/conversor.c)

---
### Operador Asignación  
Es el valor que se le asigna a una variable, es decir, es el paso de valores o resultados a una zona de memoria.
```c
a = 5 ;      //Le asigno el valor 5 a la variable 'a'
b = 6.5 ;    //Le asigno el valor 6.5 a la variable 'b'
``` 
> [!IMPORTANT]
> No es lo mismo asignar (=) que igualdad (==)
> ![adi](./images/image-2.png)  

---
### Operadores Relacionales

Estos operadores sirven para comparar, es decir, devuelven True $(1)$ o False $(0)$.

Siendo:
```c
a = 5 ;
b = 6 ;
```  

| Símbolo |  Relación | Ejemplo | Solución |
|:---:|:---:|:---:|:---:|
| <  | Menor que | a < b | True |
| >  | Mayor que | a > b | False
| <=  | Menor o igual que | a <= b | True  |
| >=  | Mayor o igual que | a >= b | False |
| == | Igual a | a == b | False |
| !=  | Distinto a | a != b | True |

[Script Operadores Relacionales y Lógicos](./ejerciciosRepaso/rangoMultiple.c)  
[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./ejerciciosRepaso/conversor.c)

---
### Operadores Lógicos
| Operador | Símbolo | |
|:---:|:---:| :---: |
| AND  | \&\& | y |
| OR  | \|\| | o |
| NOT  | ! | Negación |

[Script Operadores Relacionales y Lógicos](./ejerciciosRepaso/rangoMultiple.c)  
[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./ejerciciosRepaso/conversor.c)  

---
### Condicionales  
Esta sentencia de control permite ejecutar o no una sentencia simple o compuesta según se cumpla o no una determinada condición.  

```c
if(condicion){
  sentencias
}

if(condicion){
  sentencias
}else{
  sentencias2
}

if(condicion){
  sentencias
}else if(condicion2){ //Sino (condicion)
  sentencias2
}else{
  sentencia3
}
``` 

[Script condicional Anidado](./ejerciciosRepaso/rangoMultiple.c) 

---
### Variable Contador  
Es una variable en la memoria que se incrementará en uno o un valor contante cada vez que se ejecute un ciclo. Es utilizado para llevar la cuenta de determinadas acciones. Tiene que estar en la decalración de variables y otorgarle un valor inicial.

### Variable Acumulador  
Es una variable en la memoria utilizada para almacenar cantidades variables. Se utiliza para efectuar sumas sucesivas.

> [!IMPORTANT]
> ACUMULADOR != CONTADOR  
> La principal diferencia es que la suma dentro del acumulador es variable, mientras que en el caso del contador es constante.

---
### Ciclos  
#### For  
Controlar la cantidad de veces que es ejecuta la instrucción mediante un *CONTADOR que debe ir evolucionando hasta alcanzar el valor deseado.  
Estructura del ciclo for:  
* **inicio** $\rightarrow$ Es una asignación, ejem ```i=0```
* **condición** $\rightarrow$ Es una condición, ejm ```i<30```
* **incremento** $\rightarrow$ Es el incremento, ejm ```i++```
```c
for (inicio ; condición ; incremento){
  bloque
}
```

![for](./images/image-3.png)  

[Script Recorriendo un Vector](./ejerciciosRepaso/recorrerVector.c)  
[Script de For anidado](./ejerciciosRepaso/triangulo.c)    
[Script Recorriendo una Matriz](./ejerciciosRepaso/matrices.c)    

#### While  
Es un ciclo repetitivo basado en los resultados de una expresión lógica. Su propósito es repetir un bloque de código mientras una condición se mantenga verdadera.  

```c
while (condición){
  bloque
}
```
> [!IMPORTANT]
> Condición de control   
> * Contador $\rightarrow$ Repetición definida $\rightarrow$ Se sabe con exactitud cuántas veces se ejecutará el ciclo.
> * Flag o Centinela $\rightarrow$ Repeticion indefinida $\rightarrow$ No se sabe con aticipación cuantas veces se ejecutará el ciclo. 

![while](./images/image.png)  

[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./ejerciciosRepaso/conversor.c)

#### DoWhile  
Es una estructura de control repetitiva que ejecuta un bloque de instrucciones al menos una vez, y luego sigue repitiéndolo mientras la condición sea verdadera.

```c
do{
  bloque
}while (condición);
```

[Script de Validación de un número](./ejerciciosRepaso/validoNum.c)

---
### Vectores o Arrays  
Un vector es un conjunto de datos del mismo tipo, como números o cadenas, que están ordenados 'secuencialmente' y almacenados de forma contigua (es decir, uno al lado del otro) en memoria principal.
Tiene una longitud determinada. Se puede acceder a cada elemento mediante un índice, que comienza en cero.

![alt text](./images/image-1.png)  

[Script Formas de recorrer un Vector](./ejerciciosRepaso/recorrerVector.c)  
[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./ejerciciosRepaso/conversor.c)

---
### Matrices
Es un vector, cuyos elementos son vectores.  
Cada elemento puede referenciarse con dos índices.  
Una matriz contiene de m x n elementos lo que indica que tiene m renglones y n columnas.  

```c
tipoDeVariable nombreMatriz[renglon][columna]
```

[Script de Matrices](./ejerciciosRepaso/matrices.c)

---
### Archivos  
Un archivo, es una colección de datos que tiene un nombre y una extensión que lo identifica y su contenido puede guardarse en distintos soportes de almacenamiento.  
Tipo de Archivos:  
* **Archivos Texto**  
Registros de longitud variable. Pueden ser procesados por cualquier editor de texto. Contienen información en forma de caracteres. Normalmente se organizan los caracteres en forma de líneas al final de cada cual se coloca un carácter de fin de línea (normalmente “\r\n”).
* **Archivos Binarios**  
Registros delongitud fija. Almacenan datos en forma binaria,es decir que no son interpretables como texto (números, imágenes, etc.).

Para procesar un archivo la primera operación a realizar es abrir el archivo. Una vez que el archivo está abierto, la información puede ser intercambiada entre este y el programa. Siempre que se abre el archivo se debe de cerrar y es buena práctica verificar que se abrió.
```c
FILE= *id;
id = fopen(nombreArchivo,"modo")  //Abro el archivo
if (id == NULL) {
    perror("Error al abrir el archivo\n");
    return; 
}

{bloque}

fclose(id); //Cierro el archivo

```
Modos de aperturas en Archivos de Texto
| Modo | Operación |
|:---:|:---|
| *r* ó *rt* | Apertura en modo sólo lectura, el archivo debe existir |
| *w* ó *wt* | Apertura en modo escritura, si el archivo existe se sobreescribe y pierde el contenido anterior. Si no existe lo crea |
| *a* ó *at* | Apertura en modo agregar, si el archivo existe agrega los datos al final del archivo, sino existe lo crea |
| *r+* | Apertura en modo lectura el archivo debe existir |
| *w+* | Apertura en modo lectura/escritura, el archivo debe existir, si el archivo existe se sobreescribe y pierde el contenido anterior. Si no existe lo crea |
| *a+*  | Apertura en modo lectura/agregar, si el archivo existe agrega los datos al final del archivo, si no existe lo crea |

Modos de Aperturas en Archivos Binarios
| Modo | Operación |
|:---:|:---|
| *r* | Apertura en modo sólo lectura, el archivo debe existir |
| *wb* | Apertura en modo escritura, si el archivo existe se sobreescribe y pierde el contenido anterior. Si no existe lo crea |
| *ab* | Apertura en modo agregar, si el archivo existe agrega los datos al final del archivo, sino existe lo crea |
| *rb* ó *r+b*  | Apertura en modo lectura el archivo debe existir |
| *wb* ó *w+b* | Apertura en modo lectura/escritura el archivo debe existir, si el archivo existe se sobreescribe y pierde el contenido anterior. Si no existe lo crea |
| *ab* ó *a+b*  | Apertura en modo lectura/agregar, si el archivo existe agrega los datos al final del archivo, si no existe lo crea |

[Script de Archivos de texto](./ejerciciosRepaso/archivoTexto.c)  
[Script de Archivo Binarios](./ejerciciosRepaso/archivoBinario.c)

---
### Redondear
```c
printf("%.2f\n", numero); // Muestra con 2 decimales
printf("%.4f\n", numero); // Muestra con 4 decimales
```
[Script de operacionales](./ejerciciosRepaso/operacionales.c)

---
### Generar números Aleatorios  
Como se ve en el ejemplo de acontinuación, se generan valores fijos de una semilla por más que se los vuelva a compilar va a devolver los mismos valores.  
[Script de números aleatorios fijos](./ejerciciosRepaso/numAleatoriosFijos.c)  

Para generar números aleatorios mediante una semilla se necesita:  
* Función $\rightarrow$ *srand(int)* $\rightarrow$ Biblioteca $\rightarrow$ stdlib.h  
Esta función permite indicar la semilla o valor inicial que se usará para la generación de números aleatorios.  

* Función $\rightarrow$ *time(NULL)* $\rightarrow$ Biblioteca $\rightarrow$ time.h  
Se va a utilizar el reloj del sistema para generar una semilla de valores distintos.  

[Script de números aleatorios](./ejerciciosRepaso/numAleatorios.c)  
[Script de números aleatorios en un rango](./ejerciciosRepaso/numAleatoriosRango.c)  
[Script de números aleatorios en un rango de Inicio y Fin](./ejerciciosRepaso/numAleatoriosIF.c)  

---
### Strings  
Se denomina **strings** a una secuencia de caracteres.  
Son vectores de tipo *char*, es decir, cada caracter es almacenado en una posición del vector, ese termina con un caracter al final que indica el final de la cadena ```'\0' ```.  
A la hora de trabajar con strings se suele utilizar la biblioteca *string.h*.

```c
  // Posiciones de la cadena    // |0|1|2|3| 4|5|6|
char cadena1[7] ="Hola";        // |H|o|l|a|\0|&|*|

char miCadena[10];  //Dimensión que puede tener la cadena-> |_|_|_|_|_|_|_|_|_|\0|
//Carga de una palabra, OJO -> Sólo se va a tomar una palabra
scanf("%s",miCadena)
```  
Como se puede ver en el ejemplo anterior, la función scanf guarda lo que pulsemos por teclado hasta el primer espacio en blanco o enter, es decir, si es una cadena compuesta sólo se almacenará en el array hasta el primer espacio en blanco. Para evitarlo se utiliza:
```c
gets(miCadena)

//Para imprimir en terminal
printf('%s',miCadena)
```  
Para el ingreso de una cadena es recomendable utilizar la biblioteca string.h 
```c
//Siendo N la longitud máxima que tendrá la cadena
fgets(cadena,N,stdin);
``` 

Funciones más utilizadas de la biblioteca string.h:
* *strcpy(destino,origen)* $\rightarrow$ Copia la cadena origen a la cadena destino
* *strlen(cadena)* $\rightarrow$ Devuelve la longitud sin contar el fin de cadena
* *srcmp(primera,segunda)* $\rightarrow$ Compara alfabéticamente devolviendo un entero (tener en cuenta la tabla ASCII) 
  * <0 $\rightarrow$ Si primera va antes en el diccionario
  * =0 $\rightarrow$ Las cadenas son idénticas
  * \>0 $\rightarrow$ Si primera va después en el diccionario
* *stricmp(cad1, cad2)* ó *strcasecmp(cad1, cad2)* $\rightarrow$ Compara las cadenas alfabéticamente devolviendo un entero. Es INDIFERENTE si es mayúscula o minúscula la comparación.
  * <0 $\rightarrow$ Si la primera va antes en el diccionario
  * =0 $\rightarrow$ Si las cadenas son identicas
  * \>0 $\rightarrow$ Si la segunda va antes en el diccionario
* *strcspn(cadena, caracter)* $\rightarrow$ Devuelve el índice del primer carácter en la cadena que coincida con el caracter a comparar.  

[Script de elimina un Caracter](./ejerciciosRepaso/eliminarCaracter.c) 

---
### Algoritmo de Ordenamiento y Búsqueda de Máximos y Mínimos


---
### Funciones útiles
* sizeof() $\rightarrow$ devuelve un número entero, la cantidad de bytes que usa la variable
* system("cls") $\rightarrow$ Limpia la terminal $\rightarrow$ sólo funciona en Windows

[Index](./index.md) | [Sist. de Numeración, Máscaras y Shif](./mascarasYShif.md)