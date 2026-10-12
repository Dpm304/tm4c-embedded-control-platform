#include <stdio.h>
#include <stdint.h>

uint32_t calculate_sensor_average(uint32_t sensor_a, uint32_t sensor_b){
    uint32_t total = sensor_a + sensor_b;
    uint32_t average = total / 2U;

    printf("Total: %u\n", (unsigned int)total);
    printf("Average inside function: %u\n", (unsigned int)average);

    return average;
}

int main(void){
    uint32_t sensor_a = 80U;
    uint32_t sensor_b = 100U;
    uint32_t average = calculate_sensor_average(sensor_a, sensor_b);

    printf("Average in main: %u\n", (unsigned int)average);

    return 0;
}