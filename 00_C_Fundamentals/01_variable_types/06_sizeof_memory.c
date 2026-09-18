#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void){
  printf("char:     %zu bytes\n", sizeof(char));
  printf("int:      %zu bytes\n", sizeof(int));
  printf("long:     %zu bytes\n", sizeof(long));

  printf("uint8_t:  %zu bytes\n", sizeof(uint8_t));
  printf("uint16_t: %zu bytes\n", sizeof(uint16_t));
  printf("uint32_t: %zu bytes\n", sizeof(uint32_t));

printf("bool:       %zu bytes\n", sizeof(bool));
printf("float:      %zu bytes\n", sizeof(float));
printf("double:     %zu bytes\n", sizeof(double));

return 0;
}