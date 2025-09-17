/*
¿Que números distintos se pueden representar con...?
a. 8 bits sin signo
b. 32 bits sin signo
c. 8 bits con signo
d. 32 bits con signo
e. N bits con signo y sin signo
f. 2 dígitos hexadecimales sin signo
g. 8 dígitos hexadecimales sin signo
h. N dígitos hexadecimales sin signo
i. Con 8 bits usando codificación BCD sin signo
*/

#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#include <math.h>

int main() {
  // a. 8 bits sin signo
  printf("a) 8 bits sin signo: 0 a %u (total %u valores)\n", (unsigned char) UCHAR_MAX, UCHAR_MAX + 1);

  // b. 32 bits sin signo
  printf("b) 32 bits sin signo: 0 a %u (total %.0f valores)\n", UINT_MAX, pow(2, 32));

  // c. 8 bits con signo
  printf("c) 8 bits con signo: %d a %d (total %d valores)\n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX + 1);

  // d. 32 bits con signo
  printf("d) 32 bits con signo: %d a %d (total %.0f valores)\n",INT_MIN, INT_MAX, pow(2, 32));

  // e. N bits sin signo
  int N = 12;
  printf("e) N=%d bits sin signo: 0 a %.0f (total %.0f valores)\n", N, pow(2, N) - 1, pow(2, N));
  printf("   N=%d bits con signo: %.0f a %.0f (total %.0f valores)\n",N, -pow(2, N - 1), pow(2, N - 1) - 1, pow(2, N));

  // f. 2 dígitos hexadecimales sin signo (cada dígito = 4 bits, total 8 bits)
  printf("f) 2 hex sin signo: 0x00 a 0xFF (0 a 255, total 256 valores)\n");

  // g. 8 dígitos hexadecimales sin signo (32 bits)
  printf("g) 8 hex sin signo: 0x00000000 a 0xFFFFFFFF (0 a %u, total %.0f valores)\n",UINT_MAX, pow(2, 32));

  // h. N dígitos hexadecimales sin signo
  int H = 5; // podés cambiar H
  int bits = 4 * H;
  printf("h) %d hex sin signo: 0 a %.0f (total %.0f valores)\n",H, pow(2, bits) - 1, pow(2, bits));

  // i. 8 bits en BCD sin signo (cada 4 bits representa 1 decimal 0–9)
  // 8 bits -> 2 dígitos decimales (00 a 99)
  printf("i) 8 bits en BCD sin signo: 00 a 99 (total 100 valores)\n");

  return 0;
}