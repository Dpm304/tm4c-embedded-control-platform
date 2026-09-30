#include <stdio.h>

int main(void){
    int temperature_f = 72;
    int *temperature_ptr = &temperature_f;

    printf("Temperature: %d F\n", temperature_f);
    printf("Temperature address: %p\n", (void *)temperature_ptr);

    return 0;
}