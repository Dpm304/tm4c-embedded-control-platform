#include <stdio.h>

void print_temperature(int temperature_f){
    printf("Temperature: %d F\n", temperature_f);
}

int main(void){
    int temperature_f = 72;

    print_temperature(temperature_f);

    return 0;
}