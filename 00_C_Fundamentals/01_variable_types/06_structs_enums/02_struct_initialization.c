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

    printf("Temperature: %d F\n", sensor.temperature_f);
    printf("Humidity: %d%%\n", sensor.humidity_percent);

    return 0;
}