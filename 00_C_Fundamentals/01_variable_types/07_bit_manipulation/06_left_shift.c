#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t value = 1;
    uint8_t result = (uint8_t)(value << 3);

    printf("Value: 0x%02X\n", value);
    printf("Result: 0x%02X\n", result);

    return 0;
}