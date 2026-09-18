#include <stdio.h>
#include <stdint.h>

int main(void){
  uint16_t adc_raw = 2048;

  float voltage;

  voltage = ((float)adc_raw / 4095.0f) * 3.3f;

  printf("ADC Raw: %u\n", adc_raw);
  printf("Voltage: %.3f V\n", voltage);

  return 0;
}