#include <stdio.h>

struct SensorData{
    int temperature_f;
    int humidity_percent;
};

int main(void){
    struct SensorData sensor;

    sensor.temperature_f = 72;
    sensor.humidity_percent = 45;

    printf("Temperature: %d F\n", sensor.temperature_f);
    printf("Humidity: %d%%\n", sensor.humidity_percent);

    return 0;
}