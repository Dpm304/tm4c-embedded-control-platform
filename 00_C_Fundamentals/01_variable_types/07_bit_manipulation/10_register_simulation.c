#include <stdio.h>
#include <stdint.h>

#define GPIO_PIN0 (1U << 0)
#define GPIO_PIN1 (1U << 1)
#define GPIO_PIN2 (1U << 2)
#define GPIO_PIN3 (1U << 3)

int main(void){
    uint8_t gpio_register = 0x00;

    //Configure pins 0 and 1 as active
    gpio_register |= GPIO_PIN0;
    gpio_register |= GPIO_PIN1;

    printf("GPIO register: 0x%02X\n", gpio_register);

    //Check pin 1
    if ((gpio_register & GPIO_PIN1) != 0U){
        printf("GPIO pin 1 is active.\n");
    }

    //Clear pin 0
    gpio_register &= (uint8_t)~GPIO_PIN0;

    printf("GPIO register: 0x%02X\n", gpio_register);

    return 0;
}