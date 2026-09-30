#include <stdio.h>

int main(void){
    int sensor_value = 250;

    printf("Sensor value: %d\n", sensor_value);
    printf("Sensor address: %p\n", (void *)&sensor_value);

    return 0;
}