#include <stdio.h>
#include <stdint.h>

#define BIT_0 (1U << 0)
#define BIT_1 (1U << 1)
#define BIT_2 (1U << 2)
#define BIT_3 (1U << 3)

int main(void){
    uint8_t register_value = 0x00;

    //Set bit 2
    register_value |= BIT_2;
    
    printf("After setting bit 2: 0x%02X\n", register_value);

    //Set bit 0
    register_value |= BIT_0;

    printf("After setting bit 0: 0x%02X\n", register_value);

    //Clear but 2
    register_value &= (uint8_t)~BIT_2;

    printf("After clearing bit 2: 0x%02X\n", register_value);

    //Toggle bit 1
    register_value ^= BIT_1;

    printf("After toggling bit 1: 0x%02X\n", register_value);

    return 0;
}