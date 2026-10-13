#include <stdio.h>
#include <stdint.h>

static volatile uint32_t received_byte_count = 0U;

static void uart_interrupt_handler(void){
    received_byte_count++;
}

int main(void){
    printf("Received bytes: %lu\n", (unsigned long)received_byte_count);

    uart_interrupt_handler();
    uart_interrupt_handler();
    uart_interrupt_handler();

    printf("Received bytes: %lu\n", (unsigned long)received_byte_count);

    return 0;
}