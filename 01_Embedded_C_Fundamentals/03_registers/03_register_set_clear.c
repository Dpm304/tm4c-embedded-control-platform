#include <stdio.h>
#include <stdint.h>

#define LED_PIN_MASK (1UL << 0)
#define MOTOR_PIN_MASK (1UL << 1)
#define SENSOR_PIN_MASK (1UL << 2)

static void print_register(const char *label, uint32_t value){
    printf("%s: 0x%08lX\n", label, (unsigned long)value);
}

int main(void){
    uint32_t gpio_output_register = 0U;

    print_register("Initial", gpio_output_register);

    // Set LED and MOTOR output bits.
    gpio_output_register |= LED_PIN_MASK;
    gpio_output_register |= MOTOR_PIN_MASK;

    print_register("LED and motor ON", gpio_output_register);

    // Clear only the LED bit.
    gpio_output_register &= ~LED_PIN_MASK;

    print_register("LED OFF", gpio_output_register);

    // Toggle the sensor output bit.
    gpio_output_register ^= SENSOR_PIN_MASK;

    print_register("Sensor bit toggled ON", gpio_output_register);

    return 0;
}