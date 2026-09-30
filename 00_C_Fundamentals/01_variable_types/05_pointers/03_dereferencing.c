#include <stdio.h>

int main(void){
    int sensor_value = 250;
    int *sensor_ptr = &sensor_value;

    printf("Original value: %d\n", sensor_value);
    printf("Value through the pointer: %d\n", *sensor_ptr);

    return 0;
}