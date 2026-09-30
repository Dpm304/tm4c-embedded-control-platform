#include <stdio.h>

int main(void){
    int sensor_values[8] = {10, 25, -1, 40, 50, -1, 70, 80};

    printf("Valid sensor readings:\n");

    for (int i = 0; i < 8; i++){
        if (sensor_values[i] == -1){
            continue;
        }

        printf("Sensor %d: %d\n", i, sensor_values[i]);
    }

    printf("\nSearching for fitst high reading...\n");

    for (int i = 0; i < 8; i++){
        if (sensor_values[i] > 60){
            printf("High reading found at index %d.\n", i);
            break;
        }
    }

    return 0;
}