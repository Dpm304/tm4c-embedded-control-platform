#include <stdio.h>

int main(void){
    int sensor_a = 100;
    int sensor_b = 200;

    int *sensor_ptr = &sensor_a;

    printf("Pointer value: %d\n", *sensor_ptr);

    sensor_ptr = &sensor_b;

    printf("Pointer value after reassignment: %d\n", *sensor_ptr);

    return 0;
}
