#include <stdio.h>

int main(void){
    int sensor_values[5] = {10, 20, 30, 40, 50};
    int array_length = sizeof(sensor_values) / sizeof(sensor_values[0]);

    for (int i = 0; i < array_length; i++){
        printf("Sensor %d: %d\n", i, sensor_values[i]);
    }

    return 0;
}