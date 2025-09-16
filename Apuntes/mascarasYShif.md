[Index](./index.md) | [Apuntes Repaso](./README.md) | [Structs y Unions](./structsYUnions.md)  

# <center> 📚 Contenido  
## <center>🔰 Ejemplos  
1. [Notación](./mascarasYShif/notacion.c)
2. [Rango dependiendo de la arquitectura de la máquina](./mascarasYShif/rangosVariables.c)
3. 
4. 


## <center>📂Banco de Apuntes
### Sistemas de Numeración
* Binario
  * Base: 2
  * Símbolos: {0,1}
  * Cada dígito individual se llama bit.

* Octal
  * Base: 8
  * Símbolos: {0,1,2,3,4,5,6,7}
  * Cada dígito octal puede ser representado por 3 bits

* Hexadecimal  
  * Base: 16
  * Símbolos: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}
  * Cada dígito hexa puede ser representado por 4 bits

* Decimal
  * Base: 10
  * Símbolos: {0,1,2,3,4,5,6,7,8,9}

* BCD
  * Forma de representar cada dígito decimal mediante un grupo de 4 bits (nibble).
  * Cada decimal 0–9 se codifica en 4 bits.
Ejemplo  
259 → 0010 0101 1001  

[Script Conversor de Decimal a Binario, Octal, Hexadecimal y BCD](./ejerciciosRepaso/conversor.c)  

### Otras notaciones  
Se pueden utilizar prefijos o notaciones específicas para identificar la base de un número.  
* Decimal (base 10)→ se escribe tal cual, sin prefijo.  
Ejemplo:   
  123 → significa 123 en base 10.  

Binario (base 2) → Se suele usar el prefijo 0b o 0B.  
Ejemplo: 0b1010 = 10 en decimal  

Hexadecimal (base 16) → Se usa el prefijo 0x o 0X.  
Ejemplo: 0xAC = 172 en decimal.  

> [!TIP]  
> Formato de notación → 0BaseNum  
> el 0 indica que no es un número decimal  
> en base puede ser (x,b), para representar a la base octal no hay que poner ningun indicador ej: 012 = 10 en decimal  

[Script de Notación](./mascarasYShif/notacion.c)

---
### Operadores bitwise o bit a bit  
Son operadores que operan bit por bit sobre números enteros, es decir, usando su representación binaria. A diferencia de los operadores lógicos (&, |, !) que trabajan con *verdadero/falso* y cortocircuito, los bitwise trabajan sobre cada bit del operando y no hacen cortocircuito.
> [!TIP]  
> Utilizar **unsigned** para evitar sorpresas con el bit de signo.  
> Tener en cuenta que se debe usar **UN** solo operador

**AND**  
|A|B| A & B|
|:---:|:---:|:---:|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

**OR**  
|A|B| A \| B|
|:---:|:---:|:---:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

**XOR**  
|A|B| A ^ B|
|:---:|:---:|:---:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

**AND**  
|A|~|
|:---:|:---:|
| 0 | 1 |
| 1  | 0|

> [!IMPORTANT]   
> Tener en cuenta que se debe usar **UN** solo operador

### Máscaras  
Se utilizan para alterar un bit que pertenece a un registro.



---  
### stdint.h  
Define tipos enteros con tamaños fijos  
| Con signo | Sin signo | Tamaño |  |
|:---:|:---:|:---:|:---|
| int8_t | uint8_t | 8 bits | Entero con signo (rango -128 a 127). Entero sin signo de 8 bits (0 a 255).|
| int16_t | uint16_t | 16 bits | Entero sin signo rango de (0 a 65535) |
| int32_t | uint32_t | 32 bits |
| int64_t | uint64_t | 64 bits |


Con tamaño mínimo garantizado  
| Con signo | Sin signo | Tamaño |
|:---:|:---:|:---:|
| int_least8_t | uint_least8_t | 8 bits |
| int_least16_t | uint_least16_t | 16 bits |

Enteros más rápidos disponibles  
| Con signo | Sin signo | Tamaño | Descripción |
|:---:|:---:|:---:|:---|
| int_fast8_t | uint_fast8_t | 8 bits | el entero más rápido con al menos 8 bits.  
| int_fast16_t | uint_fast16_t | 16 bits |

Enteros dependientes de la arquitectura  
| Con signo | Sin signo | Tamaño | Descripción |
|:---:|:---:|:---:|:--- |
| intptr_t | uintptr_t | 8 bits | Enteros capaces de almacenar un puntero. |
| intmax_t | uintmax_t | 16 bits | El tipo entero más grande disponible en la implementación.|

[Script de los rangos dependiendo de la arquitectura de la máquina](./mascarasYShif/rangosVariables.c)  

---
- ¿Qué significa la palabra unsigned en lenguaje C? ¿Cómo se usa? ¿Modifica el tamaño que ocupa el tipo de datos?  
**Unsigned**$\rightarrow$ es una palabra reservada en C que se usa para declarar enteros sin signo. Esto significa que la variable no puede representar números negativos y su rango va desde 0 hasta el valor máximo posible según el tamaño en bits del tipo [0 ; +$\infty$).  
```c
unsingned char caracter // 8bits --> 0 a 255
unsingned int variable; //32bist -> 0 a 44.294.967.295

> [!IMPORTANT]   
> *unsigned* sólo aplica a tipos enteros

[Index](./index.md) | [Apuntes Repaso](./README.md) | [Structs y Unions](./structsYUnions.md)  