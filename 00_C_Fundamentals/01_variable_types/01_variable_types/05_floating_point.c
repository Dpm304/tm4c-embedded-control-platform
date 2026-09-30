#include <stdio.h>

int main(void){
  float voltage = 3.3f;
  float current = 0.250f;

  double power = voltage * current;

  printf("Voltage: %.2f V\n", voltage);
  printf("Current: %.3f A\n", current);
  printf("Power: %.3f W\n", power);

  return 0;
}