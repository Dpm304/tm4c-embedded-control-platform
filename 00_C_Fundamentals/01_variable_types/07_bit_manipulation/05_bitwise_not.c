#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t value = 0x0F;
    uint8_t result = (uint8_t)~value;

    printf("Value: 0x%02X\n", value);
    printf("NOT: 0x%02X\n", result);

    return 0;
}