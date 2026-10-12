#include <stdio.h>
#include <stdint.h>

#define SENSOR_READY_MASK  (1UL << 0)
#define DATA_AVAILABLE_MASK (1UL << 1)
#define SENSOR_ERROR_MASK    (1UL << 2)

int main(void){
    uint32_t status_register = 0U;

    printf("Initial status: 0x%08lX\n", (unsigned long)status_register);

    // Simulate hardware setting status flags.
    status_register |= SENSOR_READY_MASK;
    status_register |= DATA_AVAILABLE_MASK;

    printf("Updatated status: 0x%08lX\n", (unsigned long)status_register);

    if ((status_register & SENSOR_READY_MASK) != 0U){
        printf("Sensor status: READY\n");
    }

    if ((status_register & DATA_AVAILABLE_MASK) != 0U){
        printf("Data status: AVAILABLE\n");
    }

    if ((status_register & SENSOR_ERROR_MASK) != 0U){
        printf("Sensor status: ERROR\n");
    } else{
        printf("Sensor status: NO ERROR\n");
    }

    return 0;
}