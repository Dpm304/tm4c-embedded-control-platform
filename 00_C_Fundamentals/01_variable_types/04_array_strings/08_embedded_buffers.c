#include <stdio.h>
#include <stdint.h>

#define BUFFER_SIZE 8

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

    printf("Recieved packet:\n");

    for (int i = 0; i < BUFFER_SIZE; i++){
        printf("Byte %d: 0x%02X\n", i, rx_buffer[i]);
    }

    return 0;
}