#include <stdio.h>
#include <stdbool.h>

static volatile bool data_ready = false;

static void sensor_interrupt_handler(void){
    data_ready = true;
}

int main(void){
    printf("Waiting for sensor event...\n");

    sensor_interrupt_handler();

    if (data_ready){
        printf("Sensor event received.\n");

        data_ready = false;
    }

    printf("Data ready flag: %s\n", data_ready ? "SET" : "CLEAR");

    return 0;
}