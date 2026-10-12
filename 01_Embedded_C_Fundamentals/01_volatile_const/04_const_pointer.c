#include <stdio.h>
#include <stdint.h>

void print_sensor_data(const uint8_t *data, uint8_t length){
    for (uint8_t i = 0U; i < length; i++){
        printf("Data[%u] = 0x%02X\n", i, data[i]);
    }
}

int main(void){
    uint8_t sensor_data[4] = {
        0x10U,
        0x20U,
        0x30U,
        0x40U
    };

    print_sensor_data(sensor_data, 4U);

    return 0;
}