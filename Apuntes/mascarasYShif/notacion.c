#include <stdio.h>

int main() {
    int decimal=10;     // decimal 
    int octal=012;    // el 0 inicial lo hace OCTAL
    int hexa=0xA;    // el 0x HEXADECIMAL
    int binario=0b1010; // el 0b BINARIO

    printf("Decimal: %d\n", decimal);
    printf("Octal: %d\n", octal);
    printf("Hexa: %d\n", hexa);
    printf("Bin: %d\n", binario);

    return 0;
}
