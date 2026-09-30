#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t value = 0x20;
    uint8_t mask = 0x05;

    uint8_t result = value | mask;

    printf("Value: 0x%02X\n", value);
    printf("Mask: 0x%02X\n", mask);
    printf("Result: 0x%02X\n", result);
        
        return 0;
}