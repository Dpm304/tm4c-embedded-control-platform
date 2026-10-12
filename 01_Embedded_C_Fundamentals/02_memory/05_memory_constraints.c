#include <stdio.h>
#include <stdint.h>

#define RAM_BUDGET_BYTES     2048U
#define SENSOR_BUFFER_BYTES   512U
#define UART_BUFFER_BYTES     256U
#define SYSTEM_STATE_BYTES    128U
#define RESERVED_RAM_BYTES    512U

#define TOTAL_PLANNED_BYTES (SENSOR_BUFFER_BYTES + UART_BUFFER_BYTES + SYSTEM_STATE_BYTES + SYSTEM_STATE_BYTES + RESERVED_RAM_BYTES)

int main(void){
    printf("Hypothetical RAM budget: %u bytes\n",
        (unsigned int)RAM_BUDGET_BYTES);
    
    printf("Sensor buffer: %u bytes\n",
        (unsigned int)SENSOR_BUFFER_BYTES);

    printf("UART buffer: %u bytes\n",
        (unsigned int)UART_BUFFER_BYTES);
    
    printf("System state allowance: %u bytes\n",
        (unsigned int)SYSTEM_STATE_BYTES);

    printf("Reserved RAM: %u bytes\n",
        (unsigned int)RESERVED_RAM_BYTES);

    printf("Total planned RAM usage: %u bytes\n",
        (unsigned int)TOTAL_PLANNED_BYTES);

    if (TOTAL_PLANNED_BYTES <= RAM_BUDGET_BYTES){
        printf("RAM budget check: PASS\n");
        printf("Remaining budget: %u bytes\n",
            (unsigned int)(RAM_BUDGET_BYTES - TOTAL_PLANNED_BYTES));
    } else{
        printf("RAM budget check: FAIL\n");
        printf("Exceeds budget by %u bytes\n",
            (unsigned int)(TOTAL_PLANNED_BYTES - RAM_BUDGET_BYTES));
    }

    return 0;
}