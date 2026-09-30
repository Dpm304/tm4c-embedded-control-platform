#include <stdio.h>
#include <stdint.h>

#define STATUS_READY_MASK (1U << 0)
#define STATUS_ERROR_MASK (1U << 1)
#define STATUS_BUSY_MASK (1U << 2)

int main(void){
    uint8_t status_register = 0x00;
    status_register |= STATUS_READY_MASK;

    if ((status_register & STATUS_READY_MASK) != 0U){
        printf("System is ready.\n");
    }

    if ((status_register & STATUS_ERROR_MASK) != 0U){
        printf("System has an error.\n");
    } else{
        printf("No error detected.\n");
    }

    status_register |= STATUS_BUSY_MASK;

    if ((status_register & STATUS_BUSY_MASK) != 0U){
        printf("System is busy.\n");
    }

    return 0;
}
