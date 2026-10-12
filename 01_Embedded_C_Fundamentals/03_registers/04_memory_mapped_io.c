#include <stdio.h>
#include <stdint.h>

#define GPIO_LED_MASK (1UL << 0)

static volatile uint32_t simulated_gpio_data_register = 0U;

int main(void){
    printf("Initial simulated GPIO: 0x%08lX\n", 
        (unsigned long)simulated_gpio_data_register);

    // Simulate turning an output on.
    simulated_gpio_data_register |= GPIO_LED_MASK;

    printf("After setting LED bit: 0x%08lX\n", 
        (unsigned long)simulated_gpio_data_register);

    // Simulate turning an output off.
    simulated_gpio_data_register &= ~GPIO_LED_MASK;

    printf("After clearing LED bit: 0x08lX\n",
        (unsigned long)simulated_gpio_data_register);

    return 0;
}