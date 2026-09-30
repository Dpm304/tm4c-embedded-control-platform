#include <stdio.h>
#include <stdint.h>

#define MODE_MASK 0x03U
#define ENABLE_MASK 0x04U

int main(void){
    uint8_t control_register = 0x00;
    uint8_t mode = 2;

    control_register |= (uint8_t)(mode & MODE_MASK);
    control_register |= ENABLE_MASK;

    printf("Control register: 0x%02X\n", control_register);

    uint8_t extracted_mode = control_register & MODE_MASK;
    uint8_t enabled = control_register & ENABLE_MASK;

    printf("Mode: %u\n", extracted_mode);
    printf("Enabled: %s\n", enabled ? "Yes" : "No");

    return 0;
}