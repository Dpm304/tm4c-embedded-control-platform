#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t value = 0x2D;

    printf("Decimal: %u\n", value);
    printf("Hexadecimal: 0x%02X\n", value);

    return 0;
}