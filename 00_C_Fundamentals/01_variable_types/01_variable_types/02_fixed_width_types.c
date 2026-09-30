#include <stdio.h>
#include <stdint.h>

int main(void){
  uint8_t sensor_id = 10;
  uint16_t adc_value = 2048;
  uint32_t system_ticks = 100000;
  int8_t temperature = -10;
  int16_t motor_error = -250;
  int32_t position = -100000;

  printf("Sensor ID: %u\n", sensor_id);
  printf("ADC Value: %u\n", adc_value);
  printf("System Ticks: %u\n", system_ticks);
  printf("Temperature: %d\n", temperature);
  printf("Motor Error: %d\n", motor_error);
  printf("Position: %d\n", position);

  return 0;
}