#include <stdio.h>
#include <stdint.h>

int main(void){
  uint8_t unsigned_value = 255;
  int8_t signed_value = 127;

  printf("Unsigned Value: %u\n", unsigned_value);
  printf("Signed Value: %d\n", signed_value);

  unsigned_value++;  // Incrementing the unsigned value will wrap around to 0

  printf("After increment: %u\n", unsigned_value);

  return 0;
}