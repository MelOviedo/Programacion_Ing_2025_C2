# <center>Contenido
0. [Hola Mundo](./holaMundo.c)
1. [Tipo de Datos](./tipoDeDato.c)
2. [Operacionales Binarios](./operacionales.c)
3. [Operacionales Relacionales]()
4. [Operacionales Lógicos]()
5. []()
6. [Recorrer Vector](./recorrerVector.c)
7. [Conversor](./conversor.c)

# <center>Banco de Apuntes

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

[Script de tipo de Datos](./tipoDeDato.c)

---
### Operadores Binarios
| Operador | Símbolo |
|-----------|:---:|
| Suma  | + |
| Resta  | - |
| Multiplicación  | * |
| División  | / |
| Módulo  | % |

[Script Operadores Binarios](./operacionales.c)  
[Script Conversor de Decimal a Binario, Octal y Hexadecimal](./conversor.c)

---
### Operador Asignación  
Es el valor que se le asigna a una variable.
```c
a = 5 ;      //Le asigno el valor 5 a la variable 'a'
b = 6.5 ;    //Le asigno el valor 6.5 a la variable 'b'
``` 
> [!IMPORTANT]
> No es lo mismo asignar (=) que igualdad (==)

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

---
### Operadores Lógicos
| Operador | Símbolo |
|:---:|:---:|
| AND  | \&\& |
| OR  | \|\| |
| NOT  | ! |

---
### Condicionales

---
### Ciclos

---
### Archivos


---
### Funciones útiles
* sizeof() $\rightarrow$ devuelve un número entero, la cantidad de bytes que usa la variable
* 



---
### Redondear
```c
printf("%.2f\n", numero); // Muestra con 2 decimales
printf("%.4f\n", numero); // Muestra con 4 decimales
```
[Script de operacionales](./operacionales.c)



