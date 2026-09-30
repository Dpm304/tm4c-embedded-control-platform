#include <stdio.h>

int main(void){
    int sensor_values[5] = {10, 20, 30, 40, 50};
    int *sensor_ptr = sensor_values;

    for (int i = 0; i < 5; i++){
        printf("Sensor %d: %d\n", i, *(sensor_ptr + i));
    }

    return 0;
}