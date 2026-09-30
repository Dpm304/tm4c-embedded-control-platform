#include <stdio.h>

void update_sensor_value(int *value){
    *value = 500;
}

int main(void){
    int sensor_value = 250;

    printf("Before update: %d\n", sensor_value);

    update_sensor_value(&sensor_value);

    printf("After update: %d\n", sensor_value);

    return 0 ;
}