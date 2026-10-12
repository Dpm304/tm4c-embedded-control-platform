#include <stdio.h>
#include <stdint.h>

int main(void){
    const uint8_t motor_configuration[4] = {
        10U,
        20U,
        30U,
        40U
    };

    printf("Motor configuration:\n");

    for (uint8_t i = 0U; i < 4U; i++){
        printf("Channel %u: %u\n", i, motor_configuration[i]);
    }

    return 0;
}