#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define STATUS_READY_MASK (1UL << 0)
#define STATUS_ERROR_MASK (1UL << 1)
#define STATUS_BUSY_MASK (1UL << 2)

static void register_set_bits(volatile uint32_t *reg, uint32_t mask){
    *reg |= mask;
}

static void register_clear_bits(volatile uint32_t *reg, uint32_t mask){
    *reg &= ~mask;
}

static bool register_is_set(volatile uint32_t *reg, uint32_t mask){
    return ((*reg & mask) != 0U);
}

static void print_status(uint32_t value){
    printf("Status register: 0x%08lX\n", (unsigned long)value);
}

int main(void){
    // Simulated register
    volatile uint32_t status_register = 0U;

    print_status(status_register);

    register_set_bits(&status_register, STATUS_READY_MASK);
    register_set_bits(&status_register, STATUS_BUSY_MASK);
    print_status(status_register);

    if (register_is_set(&status_register, STATUS_READY_MASK)){
        printf("Device is ready.\n");
    }

    register_clear_bits(&status_register, STATUS_BUSY_MASK);
    print_status(status_register);

    register_set_bits(&status_register, STATUS_ERROR_MASK);
    print_status(status_register);

    if (register_is_set(&status_register, STATUS_ERROR_MASK)){
        printf("Error flag detected.\n");
    }

    return 0;
}