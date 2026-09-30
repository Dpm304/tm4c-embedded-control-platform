#include <stdio.h>

void print_sensor_values(const int *values, int length){
    for (int i = 0; i < length; i++){
        printf("Sensor %d: %d\n", i, values[i]);
    }
}

int main(void){
    int sensor_values[4] = {10, 20, 30, 40};

    print_sensor_values(sensor_values, 4);

    return 0;
}