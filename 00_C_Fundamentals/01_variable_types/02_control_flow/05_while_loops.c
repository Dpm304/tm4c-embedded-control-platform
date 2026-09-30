#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool sensor_ready = false;
    int attempts = 0;

    while (!sensor_ready && attempts < 5){
        printf("Waiting for sensor to be ready...\n");

        attempts++;

        if (attempts == 3){
            sensor_ready == true;
        }
    }

    if (sensor_ready){
        printf("Sensor is ready.\n");
    }else{
        printf("Sensor failed to become ready.\n");
    }

    return 0;
}