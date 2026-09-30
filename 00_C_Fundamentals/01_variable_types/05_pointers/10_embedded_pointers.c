#include <stdio.h>
#include <stdint.h>

#define BUFFER_SIZE 8

void print_buffer(const uint8_t *buffer, uint8_t length){
    for (uint8_t i = 0; i < length; i++){
        printf("Byte %u: 0x%02X\n", i, buffer[i]);
    }
}

int main(void){
    uint8_t rx_buffer[BUFFER_SIZE] = {
        0xAA,
        0x01,
        0x10,
        0x20,
        0x30,
        0x40,
        0x55,
        0x00
    };

    print_buffer(rx_buffer, BUFFER_SIZE);

    return 0;
}