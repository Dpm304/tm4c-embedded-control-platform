#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

int main(void){
    uint8_t byte_value = 0U;
    uint16_t short_value = 0U;
    uint32_t word_value = 0U;

    uint8_t sensor_buffer[16] = {0U};
    size_t buffer_size = sizeof(sensor_buffer);
    size_t element_count = sizeof(sensor_buffer) / sizeof(sensor_buffer[0]);

    printf("sizeof(uint8_t): %zu byte(s)\n", sizeof(byte_value));
    printf("sizeof(uint16_t): %zu byte(s)\n", sizeof(short_value));
    printf("sizeof(uint32_t): %zu byte(s)\n", sizeof(word_value));

    printf("Sensor buffer size: %zu bytes\n", buffer_size);
    printf("Sensor buffer elements: %zu\n", element_count);
    
    printf("sizeof(uint8_t *): %zu byte(s)\n", sizeof(uint8_t *));

    return 0;
}