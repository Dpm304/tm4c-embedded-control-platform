#include <stdio.h>

typedef struct{
    int temperature_f;
    int humidity_percent;
} SensorData;

int main(void){
    SensorData sensor = {
        72,
        45
    };

    SensorData *sensor_ptr = &sensor;

    printf("Temperature: %d F\n", sensor_ptr->temperature_f);
    printf("Humidity: %d%%\n", sensor_ptr->humidity_percent);

    return 0;
}