#include <stdio.h>
#include <stdbool.h>

int main(void){
    volatile bool sensor_ready = false;

    printf("Initial sensor status: %s\n", sensor_ready ? "Ready" : "Not Ready");

/*
In an embedded system, this variable could be changed by
hardware or another execution context.

The volatile qualifier tells the compiler that the value may
change unexpectedly and should be read from memory rather than
assumed to remain unchanged.
*/

sensor_ready = true;

printf("Updated sensor status: %s\n", sensor_ready ? "Ready" : "Not Ready");

return 0;
}