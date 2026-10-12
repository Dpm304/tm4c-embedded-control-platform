#include <stdio.h>
#include <stdbool.h>

/*
This variable represents data that could be modified by an
interrupt service routine (ISR).

volatile tells the compiler that the value may change outside
the normal flow of the main program.
*/

volatile bool data_ready = false;

/*
Simulated interrupt service routine (ISR).

A real ISR would be triggered by hardware rather than called
directly from main().
*/

void sensor_interrupt_handler(void){
    data_ready = true;
}

int main(void){
    printf("Waiting for sensor data...\n");

    //Simulate an interrupt occurring.
    sensor_interrupt_handler();
    
    //The main program checks the interrupt-shared flag.

    if (data_ready){
        printf("Sensor data is ready.\n");
    }

    return 0;
}