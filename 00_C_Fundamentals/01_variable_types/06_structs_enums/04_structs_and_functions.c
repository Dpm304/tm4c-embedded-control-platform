#include <stdio.h>

typedef struct{
    int temperature_f;
    int humidity_percent;
} SensorData;

void print_sensor_data(SensorData sensor){
    printf("Temperature: %d F\n", sensor.temperature_f);
    printf("Humidity: %d%%\n", sensor.humidity_percent);
}

int main(void){
    SensorData sensor = {
        72,
        45
    };

    print_sensor_data(sensor);

    return 0;
}