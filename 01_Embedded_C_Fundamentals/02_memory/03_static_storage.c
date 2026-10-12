#include <stdio.h>
#include <stdint.h>

void record_sensor_sample(void){
    static uint32_t sample_count = 0U;
    sample_count++;

    printf("Samples recorded: %u\n", (unsigned int)sample_count);
}

int main(void){
    record_sensor_sample();
    record_sensor_sample();
    record_sensor_sample();

    return 0;
}