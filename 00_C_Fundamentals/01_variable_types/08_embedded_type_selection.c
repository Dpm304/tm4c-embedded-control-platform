#include <stdint.h>
#include <stdbool.h>

typedef struct{
  uint8_t sensor_id;
  uint16_t adc_value;
  int16_t temperature;
  int32_t encoder_count;

  bool sensor_ready;
  bool fault_active;
  
} SensorData;

int main(void){
  SensorData sensor = {
    .sensor_id = 1,
    .adc_value = 2048,
    .temperature = 25,
    .encoder_count = 0,
    .sensor_ready = true,
    .fault_active = false,
  };

  (void)sensor;

  return 0;
}