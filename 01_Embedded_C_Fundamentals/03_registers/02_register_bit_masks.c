#include <stdio.h>
#include <stdint.h>

#define GPIO_PIN_0_MASK (1UL << 0)
#define GPIO_PIN_1_MASK (1UL << 1)
#define GPIO_PIN_2_MASK (1UL << 2)
#define GPIO_PIN_3_MASK (1UL << 3)

int main(void){
    // Simulate a register where pins 0 and 2 are HIGH.
    uint32_t gpio_input_register = GPIO_PIN_0_MASK | GPIO_PIN_2_MASK;

    printf("GPIO input register: 0x%08lX\n", (unsigned long)gpio_input_register);

    printf("Pin 0: %s\n", (gpio_input_register & GPIO_PIN_0_MASK) 
        != 0U ? "HIGH" : "LOW");
    printf("Pin 1: %s\n", (gpio_input_register & GPIO_PIN_1_MASK) 
        != 0U ? "HIGH" : "LOW");
    printf("Pin 2: %s\n", (gpio_input_register & GPIO_PIN_2_MASK) 
        != 0U ? "HIGH" : "LOW");
    printf("Pin 3: %s\n", (gpio_input_register & GPIO_PIN_3_MASK) 
        != 0U ? "HIGH" : "LOW");

    return 0;
}