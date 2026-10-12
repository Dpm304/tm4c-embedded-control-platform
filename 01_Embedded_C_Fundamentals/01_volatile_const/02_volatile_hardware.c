#include <stdio.h>
#include <stdint.h>

/*
Simulated hardware status register

In a real microcontroller, hardware peripherals could change the
value of this register independantly of the CPU's normal program 
flow.
*/

volatile uint8_t status_register = 0x00U;

#define SENSOR_READY_MASK (1U << 0)

int main(void){
    printf("Initial status register: 0x%02X\n", status_register);

    //Simulate hardware setting the SENSOR_READY bit.
   status_register |= SENSOR_READY_MASK;

   //Read the hardware status register.
    if ((status_register & SENSOR_READY_MASK) != 0U){
        printf("Sensor is ready.\n");
    } else{
        printf("Sensor is not ready.\n");
    }

    printf("Final status register: 0x%02X\n", status_register);

    return 0;
}