#include <stdio.h>
#include <stdbool.h>

int main(void){
  char command = 'F';

  bool system_enabled = true;
  bool fault_detected = false;

  printf("Command: %c\n", command);
  printf("System enabled: %d\n", system_enabled);
  printf("Fault detected: %d\n", fault_detected);

  return 0;
}